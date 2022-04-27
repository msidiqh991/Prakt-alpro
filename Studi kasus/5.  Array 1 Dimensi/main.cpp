#include<iostream>
using namespace std;

class data{
	public:
		int input();
		int proses();
		int output();
	private:
		int bnyk_nilai, nilai[99], jumlah, min, max, rata2;
		string nama, matkul;
};
int data::input(){
	cout<<"Masukkan Nama dosen : "; cin>>nama;
	cout<<"Matakuliah          : "; cin>>matkul;
	cout<<"masukkan nilai yang ingin di masukkan : "; cin>>bnyk_nilai;
	for(int i=0; i<bnyk_nilai; i++){
          cout<<"Masukkan nilai ke-"<<i+1<<" : "; cin>>nilai[i];
     }
}
int data::proses(){
	//maximum
	max = nilai[0];
	for(int i=0; i<bnyk_nilai; i++){
		if(nilai[i] > max){
			max = nilai[i];
		}
	}	
	cout<<endl;
	cout<<"Nilai Maksimum : "<<max;
	
	//minimum
	min = nilai[0];
	for(int i=0; i<bnyk_nilai; i++){
		if(nilai[i] < min){
			min = nilai[i];
		}
	}	
	cout<<endl;
	cout<<"Nilai Minimum : "<<min<<endl;
	
	//rata-rata
	jumlah = 0;
	for(int i=0; i<bnyk_nilai; i++){
		jumlah = jumlah+nilai[i];
	} 
	rata2 = jumlah / bnyk_nilai;
	cout<<"Nilai Rata-rata : "<<rata2<<endl;
	
}
int data::output(){
	cout<<"========================="<<endl;
	cout<<"|         OUTPUT        |"<<endl;
	cout<<"========================="<<endl;
	cout<<"Nama Dosen    : "<<nama<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Matakuliah    : "<<matkul<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Daftar Nilai  : "<<endl;
	for(int i=0; i<bnyk_nilai; i++){
		cout<<"Nilai ke-"<<i+1<<"    : ";
		cout<<nilai[i]<<endl;
	}
	cout<<"-------------------------"<<endl;
	cout<<"Nilai maximum : "<<max<<endl;
	cout<<"Nilai minimum : "<<min<<endl;
	cout<<"rata-rata     : "<<rata2<<endl;
}
int main(){
	data run;
	run.input();
	cout<<endl;
	run.proses();
	cout<<endl;
	run.output();
}
