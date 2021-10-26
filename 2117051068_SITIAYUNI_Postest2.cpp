#include <iostream>
using namespace std;

int main (){
	/* NAMA : SITI AYUNI
	   KELAS: ILMU KOMPUTER B
	   NPM  : 2117051068
	   */
	   
	   // deklarasikan Variable
	   
	   double jumlah_bitcoin;
	   double harga_beli;
	   double harga_saat_ini;
	   
	//input
	cout << " Cek Kenaikan serta Penurunan Harga Bitcoin ";
	cout << endl << endl;
	cout << " Masukkan Jumlah Bitcoin yang di beli\t\t	: " ; cin >> jumlah_bitcoin;
	cout << " Masukkan Harga Pembeliann\t			: " ; cin >> harga_beli;
	cout << " Masukkan Harga Saat Ini 				: " ; cin >> harga_saat_ini;
	
	cout<< endl << endl;
	
	//output
	cout << " Hasil Dari Pencarian ";
	cout << endl<< endl;
	cout << " Kenaikan/Penurunan\t	: " << ((harga_saat_ini-harga_beli)/harga_beli)*100 << "%" << endl;
	cout << " Untung/Rugi			: " << ((harga_saat_ini-harga_beli)*jumlah_bitcoin)/1000000 << " Juta" << endl;
	
	return 0;
	
	}
