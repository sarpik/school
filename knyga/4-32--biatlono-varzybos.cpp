#include <iostream>

using namespace std;

int main() {
	int n, kiekKartuReikiaPataikyti, kiekBaudosMinuciuUzNepataikyma;
	cin >> n >> kiekKartuReikiaPataikyti >> kiekBaudosMinuciuUzNepataikyma;

	int minuciuSuma = 0;

	for (int i = 0; i < n; i++) {
		int etapoIIveikimasMinutemis, kiekKartuPataike;
		cin >> etapoIIveikimasMinutemis >> kiekKartuPataike;

		int kiekKartuNepataike = kiekKartuReikiaPataikyti - kiekKartuPataike;
		int kiekBaudosMinuciu = kiekKartuNepataike * kiekBaudosMinuciuUzNepataikyma;

		minuciuSuma = minuciuSuma + etapoIIveikimasMinutemis + kiekBaudosMinuciu;
	}

	cout << "Varžybų dalyvis trasą įveikė per " << minuciuSuma << " minutes." << endl;

	return 0;
}

