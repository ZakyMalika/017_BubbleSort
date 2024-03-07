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
	cout << endl;
	cout << "=========================" << endl;
	cout << "Maukan Elelemnt Array"
}