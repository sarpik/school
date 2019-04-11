#include "bits/stdc++.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian");

    int x0 = 0, y0 = 0, xHit, yHit, taskai;

    cout << "Įveskite pataikytą 'x' ir 'y':\n";
    cin >> xHit >> yHit;

    int atstumasKvardratu = std::pow(xHit - x0, 2) + std::pow(yHit - y0, 2);

    if (atstumasKvardratu <= 25) {
        taskai = 10;
    } else if (atstumasKvardratu >= 36 && atstumasKvardratu <= 100) {
        taskai = 5;
    } else {
        taskai = 0;
    }

    cout << taskai;

	return 0;
}
