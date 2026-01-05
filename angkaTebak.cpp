#include <iostream>
using namespace std;

int main (){
	int tebakan;
	bool menang;
	for ( int i = 1; i <= 3; i++){
		cout << "Percobaan " << i<< "/3 - Tebak: ";
		cin >> tebakan;
		
		if (tebakan == 7){
			cout << "Benar !" << endl;
			menang = true;
			break;
		} else{
			cout << "Salah !" << endl;
		}
	}
	if (!menang){
		cout << "Kalah ! Angka = 7";
	}
	
	
	return 0;
}
