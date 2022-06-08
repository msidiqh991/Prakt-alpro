#include <iostream>
#include <conio.h>
using namespace std;

class array{
public:
	input();
	cetak_satu();
  	proses_konversi();
  	cetak_dua();
  	sortby();
  	
private:
	int array[10][10],array2[10];
	int x[10][10], x2[10];
	int n, a;
	int m, b;
};

array::input(){
	cout << " Array-1 \n";
	cout << " Jumlah baris : ";
	cin >> n;
	cout << " Jumlah kolom : "; 
	cin >> m;
	cout <<endl;
	for (int i=0; i<n; i++) {
	for (int j=0; j<m; j++) {
		cout << " Data ke "<<i<<","<<j<<" = "; 
		cin >> array[i][j];}
	}
	
	cout << "\n Array-2 \n";
	cout << " Input jumlah baris : ";
	cin >> a;
	cout << " Input jumlah kolom : "; 
	cin >> b;
	cout <<endl;
	for (int i=0; i<a; i++) {
	for (int j=0; j<b; j++) {
		cout << " Data ke "<<i<<","<<j<<" = "; 
		cin >> x[i][j];}
	}
}

array::cetak_satu(){
	cout << "\n Bentuk array multi dimensi :"<<endl;
	cout << " Array 1 : \n";
	for (int i=0; i<n; i++){
	for (int j=0; j<m; j++){
		cout <<" " << array[i][j]<<"\t";}
		cout << endl;
	}
	cout << "\n Array 2 : \n";
	for (int i=0; i<a; i++){
	for (int j=0; j<b; j++){
		cout <<" " << x[i][j]<<"\t";}
		cout <<endl;
	}
}

array::proses_konversi(){
	int k=0;
	// array 1
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			array2[k]= array[i][j];
			k++;
		}
	}
	// array 2
	int l=0;
	for (int i=0; i<a; i++) {
		for (int j=0; j<b; j++) {
			x2[l]= x[i][j];
			l++;
		}
	}
}

array::cetak_dua(){
   	cout <<endl << " Setelah dikonversi menjadi array 1 dimensi :"<<endl;
	for(int k=0; k<m*n; k++){
		cout <<" " << array2[k] <<" ";
		cout <<" " << x2[k] << " ";
	}
}

array::sortby(){
	int temp = 0;
	cout <<endl << "\n Sorting Ascending : " <<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<=n; j++){
            if(array2[i] < array2[j]){
                temp = array2[i];
                array2[i] = array2[j];
                array2[j] = temp;
            }
             if(x2[i] < x2[j]){
                temp = x2[i];
                x2[i] = x2[j];
                x2[j] = temp;
            }
        }
    }
}

int main (){
	array x;
	x.input();
	x.cetak_satu();
	x.proses_konversi();
	x.sortby();
		x.cetak_dua();
	return 0;
}
