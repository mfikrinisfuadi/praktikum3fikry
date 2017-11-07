#include <iostream>
using namespace std;

int main(){
	int t;
	int l;
	int a;
	char abjad;
	cout << "bangun datar apa yang ingin anda hitung? inputkan 'p' untuk persegi dan 's' untuk segitiga:"; cin >> abjad;
	if (abjad=='p' || abjad=='P' )
	{
		cout <<"Anda akan menghitung luas persegi \n"
		 <<"masukan tinggi:"; cin >> t;
		cout <<"masukan lebar:"; cin >> l;
		cout <<"luas persegi anda:";
		cout <<t*l;
		}
		else	if (abjad=='s' || abjad=='S' )
	{
		cout <<"Anda akan menghitung luas segitiga \n"
		 <<"masukan tinggi:"; cin >> t;
		cout <<"masukan alas:"; cin >> a;
		cout <<"luas segitiga anda:";
		cout <<0.5*a*t;
		}
		else
		cout <<"tidak tersedia";
}
