#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int minuciuSuma = 0;

	for (int i = 0; i < n; i++) {
		int dienosIMinuciuSkaicius;
		cin >> dienosIMinuciuSkaicius;

		minuciuSuma = minuciuSuma + dienosIMinuciuSkaicius;
	}

	double vidurkis = (double) minuciuSuma / n;

	cout << "Per " << n << " dienas Zinas buvo dresuojamas " << minuciuSuma << " minučių." << endl;
	cout << "Vidutiniškai per dieną katinas buvo dresuojamas " << vidurkis << " minučių." << endl;

	return 0;
}

