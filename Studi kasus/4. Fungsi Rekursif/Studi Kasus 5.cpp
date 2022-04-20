#include <iostream>
using namespace std;

class perulangan {
	public:
		int input();
		int proses();
		int output();
	
	private:
		int i, n;
		int nim, total_sks, total;
		int sks[15], diskon, hasil;
		string matkul[15], nama;
};

int perulangan::input(){
	cout << "Masukkan Nama : ";
	cin >> nama;
	cout << "Masukkan NIM : ";
	cin >> nim;
	cout << "Banyaknya matkul : ";
	cin >> n;
	for(i=0; i<n; i++){
		cout << "\nMatakuliah : ";
		cin >> matkul[i];
		cout << "Masukkan SKS : ";
		cin >> sks[i];
	}
	i = 0;
	total = 0;
	total_sks = 0;
}

int perulangan::proses() {
	if(i==n){
		total = total_sks * 120000;
		diskon = total * 0.15;
		hasil = total - diskon;
		return hasil;
	} else {
		total_sks += sks[i];
		i++;
		return proses();
	}
}

int perulangan::output(){
	cout <<"\n-----------------------";
	cout << "\nNama Mahasiswa : " <<nama;
	cout << "\nNIM Mahasiswa  : " << nim;
	cout <<"\n-----------------------";
	cout << "\n\No. \t Daftar matkul \t SKS\n";
	for(i=0; i<n; i++) {
		cout <<i+1 <<"\t" <<matkul[i];
		cout <<"\t\t" <<sks[i]<<endl;
	}
	cout << "Total SKS : " << total_sks <<endl;
	cout << "-------------------------- \n";
	cout << "Total Pembayaran : " <<hasil;
}

int main() {
	perulangan p;
	p.input();
	p.proses();
	p.output();
}

//class inputdata {
//	public :
//		void input();
//		int proses(int);
//		int ulang_rekursif(int);
//		
//	private :
//		int sks;
//		int biaya;
//		int diskon;
//		string nama, nim, matkul;
//};
//
//void inputdata::input() {
//	cout << "Masukkan Jumlah Matakuliah : ";
//	cin >> matkul;
//	cout <<endl;
//	for(int i=1; i<=x; i++) {
//		cout << "Perulangan ke-" << i <<endl;
//		cout << "Masukkan jumlah sks : ";
//		cin >> sks;
//		cout << "Nama Mahasiswa : ";
//		cin >> nama;
//		cout << "NIM Mahasiswa : ";
//		cin >> nim;
//		cout <<endl;
//	}
//}
//
//int inputdata::proses() {
//	biaya = sks * 120000;
//	diskon = biaya * 0.15;
//	
//}
//
//int inputdata::ulang_rekursif(int sks) {
//	if(matkul >= 0)
//		return(matkul);
//	else
//		return (matkul*ulang_rekursif(matkul-1));
//}
//
//int main() {
//	inputdata id;
//	id.input();
//} 

