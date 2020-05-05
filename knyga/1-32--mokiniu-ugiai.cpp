#include <iostream>
#include <iomanip> /** fixed, setprecision */

using namespace std;

int main() {
	int n;
	cin >> n;

	int ugiuSuma = 0;

	for (int i = 0; i < n; i++) {
		int mokinioIUgis;
		cin >> mokinioIUgis;

		ugiuSuma = ugiuSuma + mokinioIUgis;
	}

	double vidurkis = (double) ugiuSuma / n;

	cout << "Vidutinis klasės mokinių ūgis uvid = " << fixed << setprecision(2) << vidurkis << " cm" << endl;

	return 0;
}
