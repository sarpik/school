#include "bits/stdc++.h"

using namespace std;

struct Knyga {
    int kodas;
    int parduotuEgzemplioriuSkaicius;

    Knyga()
        : kodas(NULL), parduotuEgzemplioriuSkaicius(0)
    {
    }

    ~Knyga() = default;
};

int main()
{
	setlocale(LC_ALL, "Lithuanian");

    vector<Knyga> knygos(3);
	cout << "Įveskite 3 knygų kodus ir parduotų egzempliorių skaičius:\n";

	int maxParduota = -1;
	int kiekMaxParduota = 0;

	for (int i = 0; i < knygos.size(); i++) {
        cin >> knygos[i].kodas >> knygos[i].parduotuEgzemplioriuSkaicius;

        if (knygos[i].parduotuEgzemplioriuSkaicius >= maxParduota) {
            maxParduota = knygos[i].parduotuEgzemplioriuSkaicius;
            kiekMaxParduota++;
        }
	}

    for (int i = 0; i < knygos.size(); i++) {
        if (knygos[i].parduotuEgzemplioriuSkaicius == maxParduota) {
            cout << knygos[i].kodas << " ";
        }
    }

    /**
     * Tbh, man nelabai rūpi pažymiai:)
     * ir ne dėl jų mokausi
     *
     * O spręsti "mandrai" man yra tiesiog lengviau ir paprasčiau.
     * Realioje darbo rinkoje niekas nerašo 4 ar 8 if'ų,
     * kai galima panaudoti ciklą.
    */

	return 0;
}
