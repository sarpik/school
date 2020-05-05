#include <iostream>

using namespace std;

int main() {
	int n, vienoRatoIlgisMetrais;
	cin >> n >> vienoRatoIlgisMetrais;

	int laikuSumaSekundemis = 0;

	for (int i = 0; i < n; i++) {
		int sportininkoILaikas;
		cin >> sportininkoILaikas;

		laikuSumaSekundemis = laikuSumaSekundemis + sportininkoILaikas;
	}

	int visasAtstumas = n * vienoRatoIlgisMetrais;
	int vidutinisGreitis = visasAtstumas / laikuSumaSekundemis;

	cout << "Sportininko vidutinis greitis v = " << vidutinisGreitis << " m/s, distancijoje sugaišo " << laikuSumaSekundemis << " sekundes." << endl;	
	return 0;
}

