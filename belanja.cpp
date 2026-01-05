#include <iostream>
using namespace std;

int main (){
	int harga, terpotong, afterDiskon, totalBayar;
	int jumlah = 0; 
	int totalBelanja = 0;
	
	cout << "Masukkan harga barang (0 untuk selesai) : " << endl;
	
	while (true){
		cout << "Harga: ";
		cin >> harga;
		
		if (harga == 0){
			break;
		}
		totalBelanja += harga;
		jumlah++; 
		
	}
	if (totalBelanja >= 100000){
		terpotong = totalBelanja*10/100;
		totalBayar = totalBelanja - terpotong;
	} 
	cout << "Jumlah barang: "<< jumlah << endl;
	cout << "Total sebelum diskon: "<< totalBelanja << endl;
	cout << "Diskon: "<< terpotong << endl;
	cout << "Total bayar: " << totalBayar;
	return 0;
}
