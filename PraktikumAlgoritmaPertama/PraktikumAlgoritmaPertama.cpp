#include <iostream>
using namespace std;

int a[20]; // Deklarasi array menjadi a dengan ukuran 20
int n;		 // Dekolalrasi variable n untuk penyimpan banyaknya elemen pada array

void input() {	//prosedur untuk input
	while (true) {
		cout << "Masukan banyaknya element pada array :";	// Output ke layar
		cin >> n;		// Input dari pengguna
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;
		else {
			cout << "\n Array dapat mempunyai maksimal 20 elemen.\n";
		}

	}
	cout << endl;									//Output Baris Kosong
	cout << "=========================" << endl;	//Output ke layar
	cout << "Masukan Elemen Array" << endl;			//Output ke layar
	cout << "=========================" << endl;	//Output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}

}

void BubbleshortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		pass = pass + 1;

		cout << "\nPass" << pass - 1 << ": ";
		for (int k = 0; k < n; k++) {
			cout << a[k] << " ";
		}

	}
}