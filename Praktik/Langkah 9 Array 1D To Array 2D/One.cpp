#include <iostream>
using namespace std;

int main(){
	int n, brs, klm;
	int data[20];
	int output[20][20];
	int d = 0;
	
	cout <<"Masukkan banyaknya bilangan : ";
	cin >> n;
	for(int i=0; i<n; i++){
		cout <<"data ke-" << i <<" = ";
		cin >> data[i];
	}
	
	cout <<endl <<"Hasil data input : " <<endl; 
	for(int j=0; j<n; j++){
		cout << data[j];
	}
	cout <<endl <<endl;
	
	cout <<"Masukkan banyaknya kolom : ";
	cin >> klm;
	cout <<"Masukkan banyaknya baris : ";
	cin >> brs;
	
	// Proses perubahan array 1D ke 2D
	for(int k=0; k<brs; k++){
		for(int l=0; l<klm; l++){
			output[k][l] = data[d];
			d++;
		}
	}
	
	// Menampilkan bentuk array 2D
	cout <<endl <<"Array setelah dikonversi menjadi 2D" <<endl;	
	for(int k=0; k<brs; k++){
		for(int l=0; l<klm; l++){
			cout << output[k][l] <<"  ";
		}
		cout <<endl;
	}
	return 0;
}
