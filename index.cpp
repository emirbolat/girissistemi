#include <iostream>
using namespace std;

int main() {
	cout << "Giris yapma sistemine hos geldiniz.\n";
	cout << "Kullanici adini giriniz: ";
	string isim;
	cin >> isim;
	cout << "\nsifreyi giriniz: ";
	string sifre;
	cin >> sifre;
	
	if (isim != "isim") {
		cout << "Kullanici adi yanlis!\n";
	}
	
	if (sifre != "sifre") {
		cout << "Sifre yanlis!\n";
	}
if (isim == "isim" and sifre == "sifre") {
	cout << "Basariyla giris yapildi";
}
}
