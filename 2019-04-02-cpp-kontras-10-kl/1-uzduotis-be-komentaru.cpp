#include "bits/stdc++.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian"); 

	int skaicius;	
	cout << "Įveskite keturženklį skaičių:\n";
	cin >> skaicius;

	int nelyginiuSkaitmenuSuma = 0;
	int lyginisSkaitmenuKiekis = 0;

	int pirmasSk, antrasSk, treciasSk, ketvirtasSk;

	ketvirtasSk = skaicius % 10;	
	skaicius = skaicius / 10;			

	treciasSk = skaicius % 10;		
	skaicius = skaicius / 10;			

	antrasSk = skaicius % 10;			
	skaicius = skaicius / 10;			

	pirmasSk = skaicius;					

	if (pirmasSk % 2 != 0) {			
		nelyginiuSkaitmenuSuma += pirmasSk;
	} else {
		lyginisSkaitmenuKiekis++;		
	}

	
	

	if (antrasSk % 2 != 0) {			
		nelyginiuSkaitmenuSuma += antrasSk;
	} else {
		lyginisSkaitmenuKiekis++;		
	}


	if (treciasSk % 2 != 0) {			
		nelyginiuSkaitmenuSuma += treciasSk;
	} else {
		lyginisSkaitmenuKiekis++;		
	}


	if (ketvirtasSk % 2 != 0) {			
		nelyginiuSkaitmenuSuma += ketvirtasSk;
	} else {
		lyginisSkaitmenuKiekis++;		
	}


	cout << "nelyginiu skaitmenu suma == " << nelyginiuSkaitmenuSuma
		<< "\nlyginis skaitmenų kiekis == " << lyginisSkaitmenuKiekis << "\n";
	

	return 0;
}
