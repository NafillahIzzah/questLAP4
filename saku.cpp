#include <iostream>
using namespace std;

int main (){
	int hari, uang, total;
	
	cout << "Masukkan jumlah hari: ";
	cin >> hari;
	
	for(int i = 1; i <= hari; i++){
		cout << "Uang saku hari ke-" <<i<<": ";
		cin >> uang;
		total += uang; 
	}
	cout << "Total: "<< total;
	
	return 0;
}
