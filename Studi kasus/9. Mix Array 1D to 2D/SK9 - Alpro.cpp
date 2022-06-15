#include <iostream>
using namespace std;

class convert {
	public :
		void input();
		void prosesOutput();
		void sort1d();
			
	private :
		int n, brs, klm;
		int data[40], output[40][20];
		int d = 0, tukar;
};

void convert::input(){
	// Memasukkan banyak buku tulis
	cout <<"Masukkan banyaknya Buku tulis : ";
	cin >> n;
	for(int i=0; i<n; i++){
		cout <<"Data ke-" << i+1 <<" = ";
		cin >> data[i];
	}
	
	// Hasil seluruh data buku
	cout <<endl <<"Hasil data : " <<endl; 
	for(int j=0; j<n; j++){
		cout << data[j] <<" ";
	}
	cout <<endl <<endl;
	
	cout <<"Masukkan banyaknya kolom buku : ";
	cin >> klm;
	cout <<"Masukkan banyaknya baris buku : ";
	cin >> brs;
}

void convert::sort1d(){
	// Pertukaran data untuk Sorting
	for (int i=0; i<n-1; i++){
        tukar = i;
        int temp = 0;
        for(int j=i+1; j<n; j++){
            if(data[j] < data[tukar]){
            	tukar = j;
            }
        }   
        temp = data[tukar];
        data[tukar] = data[i];
        data[i] = temp;
    }
    
    // Tampil Sort Array 1D
    cout <<endl <<"Tampil Buku setelah disorting : " <<endl;
    for(int i=0; i<n; i++){
        cout << data[i] << " ";
    }
}

void convert::prosesOutput(){
	// Proses perubahan array 1D ke 2D
	cout <<"\n\nRak Buku Per-kolom" <<endl;
	cout <<"===================" <<endl;
	for(int k=0; k<brs; k++){
		for(int l=0; l<klm; l++){
			output[k][l] = data[d];
			d++;
		}
	}
	for(int k=0; k<brs; k++){
		for(int l=0; l<klm; l++){
			cout << output[k][l] <<"  ";
		}
		cout <<endl;
	}
}

int main(){
	convert cv;
	cv.input();
	cv.sort1d();
	cv.prosesOutput();
}
