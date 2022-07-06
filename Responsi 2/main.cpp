#include <iostream>
#include <conio.h>
using namespace std;

class sorting {
	public :
        int input();
        int sortdata();
        int ascending();
        int searching();

	private :
        int kode[25];
        string tgl, bumper[50], tipeBump[20], sortHuruf, cari;
        int stock[25];
    	int temp;
		int banyakdata, i, b, brgTersedia;
};  

int sorting::input() {
  	cout << "---------------------------------------" <<endl;
  	cout << "[       PT. Honda Prospect Motor      ]" <<endl;
  	cout << "[      ==========================     ]" <<endl;
  	cout << "[           DEPARTMENT POPA           ]" <<endl;
  	cout << "---------------------------------------" <<endl;
	cout << "Masukkan Tanggal : ";
  	cin >> tgl;
  	cout << "Masukkan banyaknya data : ";
  	cin >> banyakdata;
 	for(i=0; i<banyakdata; i++){
   		cout <<endl;
    	cout <<"Data ke-"<<(i+1)<<" :"<<endl;
    	cout <<"=================== \n";
    	cout <<"Kode Produksi Barang   : ";
    	cin >> kode[i];
    	cout <<"Masukkan Brand Bumper  : ";
    	cin.ignore();
    	getline(cin, bumper[i]);
    	cout <<"\tTipe Bumper    : ";
    	cin >> tipeBump[i];
    	cout <<"Masukkan Stock Barang  : ";
    	cin >> stock[i];
  	}
  	sortdata();
}

int sorting::sortdata() {
  	cout<<"\n Tanggal : " << tgl <<endl;
  	cout<<"======================================================="<<endl;
  	cout<<"|   Kode Produksi  |  Tipe Bumper  |   Jumlah Barang  |"<<endl;
  	cout<<"======================================================="<<endl;
    for(i=0;i<banyakdata;i++){
      	cout <<"| "<<kode[i]<<"\t\t  "<<" | "<<bumper[i] << " " << tipeBump[i] 
			 <<"\t  "<<" | "<<stock[i]<<"             "<<" |"<<endl;
  	}
  	for(i=1; i<banyakdata; i++){
    	for(b=0; b<banyakdata-1; b++){
      		if(kode[b] > kode[b+1]){
        	// Sorting Kode Produksi
        	temp = kode[b];
        	kode[b] = kode[b+1];
        	kode[b+1] = temp;

       		// Sorting Merk Bumper
        	sortHuruf = bumper[b];
        	bumper[b] = bumper[b+1];
        	bumper[b+1] = sortHuruf;
        	
        	// Sorting Tipe Bumper
        	sortHuruf = tipeBump[b];
        	tipeBump[b] = tipeBump[b+1];
        	tipeBump[b+1] = sortHuruf;
        	
        	// Sorting Stok/Jumlah Barang
        	temp = stock[b];
        	stock[b] = stock[b+1];
        	stock[b+1] = temp;
      		}
    	}     
  	}
  	cout<<endl;
  	cout << "Tekan untuk melanjutkan ... ";
  	getch();
  	ascending();
}

int sorting::ascending() {
  	system("cls");
  	cout <<"Setelah data melalui proses Ascending : "<<endl;
 	cout<<"\n Tanggal : " << tgl <<endl;
  	cout<<"======================================================="<<endl;
  	cout<<"|   Kode Produksi  |  Tipe Bumper  |   Jumlah Barang  |"<<endl;
  	cout<<"======================================================="<<endl;
  	for(b=0; b<banyakdata; b++){
    	cout <<"| "<<kode[b]<<"\t\t  "<<" | "<<bumper[b] << " " << tipeBump[b] 
			 <<"\t  "<<" | "<<stock[b]<<"             "<<" |"<<endl;
	}
  	cout <<endl;
  searching();
}

int sorting::searching() {
  	cout<<endl;
  	cout <<"Cari : ";
  	cin >> cari;
  	brgTersedia = 0;
  	cout <<"\nDitemukan : " <<endl;
  	for(b=0; b<banyakdata; b++) {
    	if(bumper[b] == cari){
       		brgTersedia = 1;
       		cout << " - " << bumper[b] << " " << tipeBump[b] << "\t: " << stock[b];
       		cout <<endl;
      	}
    }
  	if(brgTersedia == 0){
    	cout<<"Data Tidak ditemukan"<<endl;
  	}
}

int main() {
  sorting srt;
  srt.input();
}
