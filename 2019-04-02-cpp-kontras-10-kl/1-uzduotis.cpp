#include "bits/stdc++.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian"); /// lietuvių kalbos raidės `cout`e ir kitur

	int skaicius;	/// pavyzdžiui naudosim 1234
	cout << "Įveskite keturženklį skaičių:\n";
	cin >> skaicius;

	int nelyginiuSkaitmenuSuma = 0;
	int lyginisSkaitmenuKiekis = 0;

	int pirmasSk, antrasSk, treciasSk, ketvirtasSk;

	ketvirtasSk = skaicius % 10;	/// 1234 % 10 == 4
	skaicius = skaicius / 10;			/// 1234 / 10 == 123

	treciasSk = skaicius % 10;		/// 123 % 10 == 3
	skaicius = skaicius / 10;			/// 123 / 10 == 12

	antrasSk = skaicius % 10;			/// 12 % 10 == 2
	skaicius = skaicius / 10;			/// 12 / 10 = 1

	pirmasSk = skaicius;					/// 1

	if (pirmasSk % 2 != 0) {			/// jei NElyginis
		nelyginiuSkaitmenuSuma += pirmasSk;
	} else {
		lyginisSkaitmenuKiekis++;		/// jei lyginis
	}

	/// dabar viskas kartosis, tik su kitais skaičiais.
	/// čia žymiai geriau būtų naudoti `for` ciklą.

	if (antrasSk % 2 != 0) {			/// jei NElyginis
		nelyginiuSkaitmenuSuma += antrasSk;
	} else {
		lyginisSkaitmenuKiekis++;		/// jei lyginis
	}


	if (treciasSk % 2 != 0) {			/// jei NElyginis
		nelyginiuSkaitmenuSuma += treciasSk;
	} else {
		lyginisSkaitmenuKiekis++;		/// jei lyginis
	}


	if (ketvirtasSk % 2 != 0) {			/// jei NElyginis
		nelyginiuSkaitmenuSuma += ketvirtasSk;
	} else {
		lyginisSkaitmenuKiekis++;		/// jei lyginis
	}


	cout << "nelyginiu skaitmenu suma == " << nelyginiuSkaitmenuSuma
		<< "\nlyginis skaitmenų kiekis == " << lyginisSkaitmenuKiekis << "\n";
	/// "\n" yra tas pats, kas endl (nauja eilutė)

	return 0;
}
