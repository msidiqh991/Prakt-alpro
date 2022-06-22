#include <iostream>
#include <conio.h>
using namespace std;

class node {
	public :
		int data;
		string nama;
		node *berikut;
};

int main() {
	// Lankah 1 : input
	// Data pertama
	node *pertama;
	pertama = new node;
	pertama -> data = 2100018399;
	pertama -> nama = "Sidiq";
	pertama -> berikut = NULL;
	cout << "Isi data node pertama adalah \t: " << pertama->data <<",\t String : " << pertama -> nama <<endl;

	// Data kedua
	node *kedua;
	kedua = new node;
	kedua -> data = 2100018397;
	kedua -> nama = "Adit";
	kedua -> berikut = NULL;
	cout << "Isi data node kedua adalah \t: " << kedua->data <<",\t String : " << kedua -> nama <<endl;
	
	// Data ketiga
	node *ketiga;
	ketiga = new node;
	ketiga -> data = 2100018396;
	ketiga -> nama = "Suryo";
	kedua -> berikut = NULL;
	cout << "Isi data node ketiga adalah \t: " << ketiga->data <<",\t String : " << ketiga -> nama <<endl;
	
	// Data Keempat
	node *keempat;
	keempat = new node;
	keempat -> data = 1910001122;
	keempat -> nama = "Frieda";
	keempat -> berikut = NULL;
	cout << "Isi data node keempat adalah \t: " << keempat->data <<",\t String : " << keempat -> nama <<endl;
	
	// Data Kelima
	node *kelima;
	kelima = new node;
	kelima -> data = 2100018999;
	kelima -> nama = "Fadil";
	kelima -> berikut = NULL;
	cout << "Isi data node kelima adalah \t: " << kelima->data <<",\t String : " << kelima -> nama <<endl;
	
	// Data Keenam
	node *keenam;
	keenam = new node;
	keenam -> data = 1100008103;
	keenam -> nama = "Miko";
	keenam -> berikut = NULL;
	cout << "Isi data node keenam adalah \t: " << keenam->data <<",\t String : " << keenam -> nama <<endl;
	
	// langkah 2 : Proses
	pertama -> berikut = kedua;
	cout <<endl << "Isi data node pertama dicetak dari node kedua adalah \t: ";
	cout << pertama -> berikut -> data <<endl;
	
	kedua -> berikut = ketiga;
	cout << "Isi data node kedua dicetak dari node ketiga adalah \t: ";
	cout << kedua -> berikut -> data <<endl;
	
	ketiga -> berikut = keempat;
	cout << "Isi data node ketiga dicetak dari node keempat adalah \t: ";
	cout << ketiga -> berikut -> data <<endl;
	
	keempat -> berikut = kelima;
	cout << "Isi data node keempat dicetak dari node kelima adalah \t: ";
	cout << keempat -> berikut -> data <<endl;
	
	kelima -> berikut = keenam;
	cout << "Isi data node kelima dicetak dari node keenam adalah \t: ";
	cout << kelima -> berikut -> data <<endl;
	

	// langkah 3 : Output
	cout <<endl;
	cout << "----------------------------------------------\n";
	cout << "     DAFTAR PESERTA LOMBA PARMATIKA FINAL    |\n";
	cout << "----------------------------------------------\n";
	node *jalan = pertama;
	int i = 1;
	while (jalan != NULL) {
		cout << "NIM ke-" << i << " : " << jalan -> data 
			 <<"\t Nama : " << jalan -> nama <<endl;
		i++;
		jalan = jalan -> berikut;
	}
}
