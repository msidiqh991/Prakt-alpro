#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {

	int jum_beli, bayar, disc, diskon, jarak, ongkir, potkir,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[55];
	char status;
	float total_beli;
	ofstream myfile;

	do {	
	myfile.open ("struk.txt", ios::trunc);
	cout <<endl <<"==== MENU WARUNG MERIAH ====" <<endl;
    cout <<"1. Ayam geprek	| Rp.21,000" <<endl;
    cout <<"2. Ayam goreng	| Rp.17,000" <<endl;
    cout <<"3. Udang goreng	| Rp.19,000" <<endl;
    cout <<"4. Cumi goreng	| Rp.20,000" <<endl;
    cout <<"5. Ayam bakar	| Rp.25,000" <<endl;
    cout <<"---------------------------------"<<endl;
	
	cout << "Masukan Jumlah Beli : ";
	cin >> jum_beli; 
	cin.ignore();
	
	for (int i=0; i<jum_beli; i++){
		cout<<endl;
		cout<<"Masukan Pesanan Ke-"<<i+1<<endl;
		
		cout<<"Nama Barang : "; 
		getline(cin, nama_barang[i]);
		
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
	
	cout << "===================================== \n";
	cout << "Masukkan Jarak tempuh[KM] yang akan dilalui : ";
	cin >> jarak;
	
	if(jarak < 3) {
		cout <<"Biaya Ongkir dikenakan sebanyak Rp.15,000" <<endl;
		ongkir = 15000;
	} else if(jarak >= 3) {
		cout <<"Biaya Ongkir dikenakan sebanyak Rp.25,000" <<endl;
		ongkir = 25000;
	} 
	
	if(total_beli > 25000 && total_beli <= 50000 ){
		cout <<"Mendapatkan Potongan Ongkir Rp.3000\n";
		potkir = ongkir - 3000;
 	
	} else if(total_beli > 50000 && total_beli <= 150000) {
		cout <<"\nMendapatkan Potongan ongkir Rp.5000 dan diskon 15% \n";
		potkir = ongkir - 5000;
		diskon = 0.15 * total_beli;
	} else if(total_beli > 150000) {
		cout <<"\nMendapatkan Potongan ongkir Rp.8000 dan diskon 35% \n";
		potkir = ongkir - 8000;
		diskon = 0.35 * total_beli;
	} else {
		cout << "\nTidak mendapat potongan";
	}
	
	cout <<"\nJumlah Bayar : Rp." <<total_beli <<endl;
	cout <<"Jarak tempuh : " <<jarak <<" KM." <<endl;
	cout <<"Total Ongkir : Rp." <<potkir <<endl;
	cout <<"Diskon       : Rp." <<diskon <<endl; 
	cout <<"Total Bayar  : Rp." <<total_beli - diskon + potkir <<endl<<endl;
	cout << "----------------------------------- \n";
	cout <<"Bayar        : Rp.";
	cin >> bayar; 
	cout <<"Kembali      : Rp.";
	cout << (bayar - (total_beli - diskon + potkir)) <<endl;
	
	cout << "------------------------------------\n";
	cout << "Lanjut pesanan? (y/n) : ";
	cin >> status;
	}
	while(status=='Y'||status=='y');
	
	//bagian output Notepad
	myfile<<"========= STRUK PEMBAYARAN ========="<<endl;
	for (int i=0; i<jum_beli; i++){
		myfile<<endl << "No. " <<i+1 <<setw(8)<<"\nNama Pesanan\t: "<<nama_barang[i]<<setw(10)<<"\nJumlah\t\t: "<<jumlah[i]<<setw(12);
		myfile<<"\nHarga\t\t: "<<harga[i]<<setw(12)<<"\nSub Total\t: "<<sub_tot[i]<<endl; 
	}
	
	myfile<< "===================================== \n";
	
	if(jarak < 3) {
		myfile<<"Biaya Ongkir dikenakan sebanyak Rp.15,000" <<endl;
		ongkir = 15000;
	} else if(jarak >= 3) {
		myfile<<"Biaya Ongkir dikenakan sebanyak Rp.25,000" <<endl;
		ongkir = 25000;
	} 
	
	if(total_beli > 25000 && total_beli <= 50000 ){
		myfile<<"Mendapatkan Potongan Ongkir Rp.3000\n";
		potkir = ongkir - 3000;
 	
	} else if(total_beli > 50000 && total_beli <= 150000) {
		myfile<<"\nMendapatkan Potongan ongkir Rp.5000 dan diskon 15% \n";
		potkir = ongkir - 5000;
		diskon = 0.15 * total_beli;
	} else if(total_beli > 150000) {
		myfile<<"\nMendapatkan Potongan ongkir Rp.8000 dan diskon 35% \n";
		potkir = ongkir - 8000;
		diskon = 0.35 * total_beli;
	} else {
		myfile<< "\nTidak mendapat potongan";
	}
	
	myfile<<"\nJumlah Bayar : Rp." <<total_beli <<endl;
	myfile<<"Jarak tempuh : " <<jarak <<" KM." <<endl;
	myfile<<"Total Ongkir : Rp." <<potkir <<endl;
	myfile<<"Diskon       : Rp." <<diskon <<endl; 
	myfile<<"Total Bayar  : Rp." <<total_beli - diskon + potkir <<endl<<endl;
	myfile<< "----------------------------------- \n";
	myfile<<"Bayar        : Rp."<<bayar<<endl;
	myfile<<"Kembali      : Rp.";
	myfile<< (bayar - (total_beli - diskon + potkir)) <<endl;
	myfile<< "------------------------------------\n";
	myfile<<"\nTerimakasih sudah memesan:)"<<endl;
	myfile.close();
	return 0;
}
