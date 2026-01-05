#include <iostream>
using namespace std;
int main (){
	int n, pilih, an, a1, a2;
	
	cout << "====== FIBONACI GENERATOR ========"<<endl;
	cout << "1) n suku" << endl;
	cout << "2) sampai <= n" << endl;
	cout << "3) exit" << endl;
	cout << "pilih:";
	cin >> pilih;
	cout << "Masukkan n: ";
	cin >> n;
	
	a2 = 0;
	a1 = 1;
	an = a1 + a2;
	cout << a2 << " " << a1 << " ";
	
	switch (pilih){
		case 1:
			for (int i = 2; i < n; i++) {
                an = a1 + a2;
                cout << an << " ";
                a2 = a1;
                a1 = an;
            }
            break;
		
		case 2:
			while (true) {
                an = a1 + a2;
                if (an > n) break;
                cout << an << " ";
                a2 = a1;
                a1 = an;
            }
            break;
        
        case 3:
        	return 0;
            
		default:
			cout << "Pilihan tidak valid!";
			
	}
	}


