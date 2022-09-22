#include <iostream>
using namespace std;

int main ()
{
	int num;
	cout << "Masukkan angka :" << endl;
	cin >> num;
	switch(num)
	{
		case 1 :
			cout << "satu" << endl;
			break;
		case 2 :
			cout << "dua" << endl;
			break;
		case 3 :
			cout << "tiga" << endl;
			break;
		default :
			cout << "Bilangan lebih dari tiga" << endl;
	}
	
	return 0;
}
