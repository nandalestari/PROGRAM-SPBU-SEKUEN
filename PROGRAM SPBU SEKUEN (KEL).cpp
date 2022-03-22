#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
	int pilihan, jumlah, total, uang, kembalian;
	int bensin;
x:
	cout << "##   STRUK SPBU GIWANGAN   ##\n";
	cout << "=====================================================\n";
	cout << "Pilihan Menu: \n";
	cout << "[1] Kasir SPBU\n";
	cout << "[2] Keluar dan cetak struk\n";
	cout << "=====================================================\n";

	cout << "Pilihan Anda: ";
	cin >> pilihan;
	if(pilihan == 1){
		cout << "\n";
		cout << " \t\tSPBU GIWANGAN " <<endl;
		cout << "======================================================\n";
		cout << "Harga perliter, PERTALITE [1]= Rp 7000\n";
		cout << "Harga perliter, PERTAMAX [2]= Rp 9000\n";
		cout<<"Jenis Bensin : ";
		cin>>bensin;
}
	if(bensin == 1){
		cout << "PERTALITE\n";
		cout << "Jumlah Liter : ";
		cin >> jumlah;
		total = 7000*jumlah;
		cout << "Total: Rp " << total << endl;
		cout << "Uang yang dibayarkan : ";
		cin >> uang;
		kembalian = uang - total;
		cout << "Kembalian : " << kembalian << endl;
		cout << "=====================================================\n";
		}
		if(bensin == 2){
		cout << "PERTAMAX\n";
		cout << "Jumlah Liter : ";
		cin >> jumlah;
		total = 9000*jumlah;
		cout << "Total: Rp " << total << endl;
		cout << "Uang yang dibayarkan : ";
		cin >> uang;
		kembalian = uang - total;
		cout << "Kembalian : " << kembalian << endl;
		cout << "=====================================================\n";
		}
		goto x;
	} 
		
}
