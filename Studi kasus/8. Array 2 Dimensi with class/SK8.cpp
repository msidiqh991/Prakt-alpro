#include <iostream>
using namespace std;
class matrix{
  public:
    void input();
    void proses();
    void output();
  private:
    string barang[5] = {"Logitech" , "Microsoft", "Apple's", "Philips", "Dell   "};
    int total = 0;
    int stock[5] = {5, 18, 17, 2, 1};
    int harga[5] = {130000, 200000, 231000, 190000, 141000};
    float range[10][10];
};
void matrix::input(){
	range[0][0] = 5;
    range[0][1] = 130000;
    range[1][0] = 8;
    range[1][1] = 200000;
    range[2][0] = 17;
    range[2][1] = 231000;
    range[3][0] = 2;
    range[3][1] = 190000;
    range[4][0] = 1;
    range[4][1] = 141000;
}
void matrix::proses(){
    cout<<"======================================="<<endl;
	cout<<"                List data        "<<endl;
	cout<<"======================================="<<endl;
	cout<<"   Nama  \t|  Stok | Harga satuan |"<<endl;
	cout<<"---------------------------------------"<<endl;
    for(int i=0; i<5; i++ ) {
         cout <<" " << barang[i] <<"\t| " << stock[i]
			<<"\t| " << harga[i] <<endl;
		}
    cout<<"---------------------------------------" <<endl;
}
void matrix::output(){
  	for(int i=0; i<5; i++){
    	total = total+range[i][0]*range[i][1];
	}
		
  cout<<"Total penjualan :\t Rp." << total;
  for(int i=0;i<5;i++){
      	for(int j=0;j<2;j++){
    		range[i][j] = stock[j];
    		range[i][j+1] = harga[j];
  		}
  	}
}
int main(){
    matrix x;
    x.input();
    x.proses();
    x.output();
}
