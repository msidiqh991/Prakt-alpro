#include <iostream>
#include <string.h>
using namespace std;

class sorting {
	public :
        int input();
        int sortdata();
        int descending();
        int searching();

	private :
        int id[25];
        string nama[20], sortHuruf;
        int stock[25];
    	int temp;
		int banyakdata,i,b, cari, brgTersedia;
};  

int sorting::input() {
  cout << "---------------------------------------" <<endl;
  cout << "Muhammad Sidiq Hardiansyah - 2100018399" <<endl;
  cout << "Suryo Bintoro              - 2100018396" <<endl;
  cout << "Heryana Dimas Aditya       - 2100018397" <<endl;
  cout << "---------------------------------------" <<endl<<endl;
  cout << "Masukkan banyaknya data : ";
  cin >> banyakdata;
  for(i=0; i<banyakdata; i++){
    cout <<endl;
    cout <<"Data ke-"<<(i+1)<<":"<<endl;
    cout <<"Input ID Barang        : ";
    cin >> id[i];
    cout <<"Input Nama Barang      : ";
    cin.ignore();
    getline(cin, nama[i]);
    cout <<"Input Stock Barang     : ";
    cin >> stock[i];
    cout <<endl;
  }
  sortdata();
}

int sorting::sortdata() {
  cout<<"Data Barang"<<endl;
  cout<<"================================================="<<endl;
  cout<<"|   ID Barang  |  Nama Barang   |   Stock Barang|"<<endl;
  cout<<"================================================="<<endl;
    for(i=0;i<banyakdata;i++){
      cout<<"| "<<id[i]<<"\t\t\t"<<" | "<<nama[i]<<"\t\t "<<"|"<<stock[i]<<"\t\t"<<" |"<<endl;
  }
  for(i=0; i<banyakdata; i++){
    for(b=0; b<banyakdata-1; b++){
      if(id[b] < id[b+1]){
        // Descending Id barang
        temp = id[b];
        id[b] = id[b+1];
        id[b+1] = temp;

        // Descending String
        sortHuruf = nama[b];
        nama[b] = nama[b+1];
        nama[b+1] = sortHuruf;

        // Descending Stok barang
        temp = stock[b];
        stock[b] = stock[b+1];
        stock[b+1] = temp;
      }
    }     
  }
  cout<<endl;
  descending();
}

int sorting::descending() {
  cout<<endl;
  cout <<"Setelah data diurutkan berdasarkan ID terbesar : "<<endl;
  cout <<"==============================================="<<endl;
  cout <<"| ID Barang     | Nama Barang |  Stock Barang |"<<endl;
  cout <<"==============================================="<<endl;
  for(b=0;b<banyakdata;b++){
    cout <<"| "<<id[b]<<"\t\t"<<" | "<<nama[b]<<"\t\t"<<" | "<<stock[b]<<"\t\t"<<" |"<<endl;
  }
  cout <<endl;
  searching();
}

int sorting::searching() {
  cout<<endl;
  cout <<"Masukan ID Barang Untuk Mencari : ";
  cin >> cari;
  brgTersedia = 0;
  
  for(b=0;b<banyakdata;b++) {
    if(id[b] == cari){
       brgTersedia = 1;
        cout<<"================================================"<<endl;
        cout<<"|      Nama Barang     |       Stock Barang    |"<<endl;
        cout<<"================================================"<<endl;
        cout<<"| "<<nama[b]<<"\t\t"<<" | "<<stock[b]<<"\t\t"<<" |"<<endl;
      }
    }
  cout<<"--------------------------------------------------"<<endl;
  if (brgTersedia == 0){
    cout<<"Data Tidak ditemukan"<<endl;
  }
}

int main() {
  sorting srt;
  srt.input();
}
