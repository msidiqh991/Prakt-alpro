#include <iostream>
#include <conio.h>
using namespace std;

class array{
public:
 	void input();
	void cetak1D();
  	void convert();
  	void cetak2D();
  	void sortby();
  	
private:
	int a[10][10], b[10];
	int n, m, tukar;
};

void array::input(){
	cout << " Jumlah baris : ";
	cin >> n;
	cout << " Jumlah kolom : "; 
	cin >> m;
	cout <<endl;
	
	cout <<" Array Input - " <<endl;
	for (int i=0; i<n; i++) {
	for (int j=0; j<m; j++) {
		cout << " Data ke "<< i+1 <<","<<j<<" = "; 
		cin >> a[i][j];
		}
	}
}

void array::cetak2D(){
	cout << "\n Bentuk array multi dimensi :"<<endl;
	cout << " ========================= \n";
	for (int i=0; i<n; i++){
	for (int j=0; j<m; j++){
		cout <<" " << a[i][j]<<"\t";}
		cout << endl;
	}
}

void array::convert(){
	int x=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			b[x]= a[i][j];
			x++;
		}
	}
}

void array::sortby(){
	for(int i=0; i<n*m-1; i++){
        tukar = i;
        int temp = 0;
        for(int j=i+1; j<n*m; j++){
            if(b[j] < b[tukar]){
            	tukar = j;
            }
        }   
        temp = b[tukar];
        b[tukar] = b[i];
        b[i] = temp;
    } 
}

void array::cetak1D(){
   	cout <<endl << " Konversi ke Array 1 dimensi :"<<endl;
	for (int k=0; k<n*m; k++){
		cout <<" Data ke [" << k+1 <<"] = " << b[k] <<endl;
	}
}
	
int main(){
	array x;
	x.input();
	x.cetak2D();
	x.convert();
	x.sortby();
	x.cetak1D();
	return 0;
}
