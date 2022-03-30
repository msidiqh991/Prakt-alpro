#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {

	int jum_beli, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[55];
	char status;
	float total_beli;

	cout << "\n     Kedai Ayam kota X" <<endl;
	do {
	cout << "----------------------------" <<endl;
	cout << "         Menu Utama\n";
	cout << "----------------------------" <<endl;
	cout << "1. Ayam goreng | Rp. 17.000 \n";
	cout << "2. Ayam bakar  | Rp. 21.000 \n";
	cout << "----------------------------" <<endl <<endl;
	
	cout << "Masukan Jumlah Beli : ";
	cin >> jum_beli; 
	
	for (int i=0; i<jum_beli; i++){
		cout<<endl;
		cout<<"Masukan Pesanan Ke-"<<i+1<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; 
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; 
		
		cout<<"Harga       : ";
		cin>>harga[i]; 
		sub_tot[i] = jumlah[i]*harga[i]; 
		total_beli += sub_tot[i]; 
	}
	cout<<endl;
	cout<<"========= STRUK PEMBAYARAN ========="<<endl;
	for (int i=0; i<jum_beli; i++){
		cout <<endl << "No. " <<i+1 <<setw(8)<<"\nNama Pesanan\t: "<<nama_barang[i]<<setw(10)<<"\nJumlah\t\t: "<<jumlah[i]<<setw(12);
		cout <<"\nHarga\t\t: "<<harga[i]<<setw(12)<<"\nSub Total\t: "<<sub_tot[i]<<endl; 
	}

	if (total_beli >= 45000){
		diskon = 0.10 * total_beli;
		cout <<endl;
	}
	
	cout << "================================== \n\n";
	cout <<"Jumlah Bayar : Rp." <<total_beli <<endl;
	cout <<"Diskon        : Rp." <<diskon <<endl; 
	cout <<"Total Bayar  : Rp." <<total_beli - diskon <<endl<<endl;
	cout << "----------------------------------- \n";
	cout <<"Bayar        : Rp. ";
	cin >> bayar; 
	cout <<"Kembali      : Rp.";
	cout <<(bayar - (total_beli - diskon)) <<endl;
	
	cout << "------------------------------------\n";
	cout << "Lanjut pesanan? (y/n) : ";
	cin >> status;
	}
	while(status=='Y'||status=='y');
	cout<<"\nTerimakasih sudah memesan"<<endl;
	return 0;
}
