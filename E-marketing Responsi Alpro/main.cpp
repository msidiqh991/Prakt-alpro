#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

class implementasi {
	public :
		int login();
		int menu();
		int checkout();
		int payment();
		int cetak();
		
	private :
		string user_input, barang[25], alamat, ekspedisi_pilihan, mt_bayar;
		int pass_input, total_akhir, jarak, diskon, ongkir, potong_ongkir;
		int harga[25], jumlah_beli, jumlah_satuan[25], sub_total[25];
		char ValidasiDiskon, ValidasiAsuransi;
		int asuransi, ulang, pembayaran;
		int saldo =	150000;
		ofstream print;
};

int implementasi::login() {
	// Halaman Login [Page :: Login]
	cout << "-- Login Page --" <<endl;
	cout << "Username : ";
	getline(cin, user_input);
	cout << "Password : ";
	cin >> pass_input;
	
	if((user_input != "0") && (pass_input != 0)) {
		menu();
	} else {
		cout << "Login gagal, Silahkan diulangi!";
	}
}

int implementasi::menu() {
	// Page baru [Menu :: home]
	system("CLS");
	cout << "\t\t [" << user_input  << "]";
	cout <<endl << "\t\t [Jumlah Saldo : Rp." << saldo << "]";
	cout <<endl;
	
	// Menentukan Barang yang ingin dibeli [Order :: item]
	cout <<endl << "Jumlah beli : ";
	cin >> jumlah_beli;
	cout << "---------------" <<endl;
	
	for(int i=0; i<jumlah_beli; i++) {
		cout << "Order list ke-" << i+1 <<endl;
		cout << "Nama Barang \t= ";
		cin.ignore();
		getline(cin, barang[i]);
		cout << "Jumlah satuan \t= ";
		cin >> jumlah_satuan[i];
		cout << "Harga satuan \t= Rp.";
		cin >> harga[i];
		sub_total[i] = jumlah_satuan[i] * harga[i]; 
		total_akhir += sub_total[i]; 
		cout <<endl;	
	}
	checkout();
}

int implementasi::checkout() {
	// Menentukan Alamat
	cout << "------------------";
	cout <<endl << "Alamat Penerima = ";
	cin.ignore();
	getline(cin, alamat);
	
	// Ekspedisi Pengiriman
	ulang :
	cout <<endl << "Opsi pengiriman";
	cout <<endl << "----------------";
	cout <<endl << "Hemat";
	cout <<endl << "Reguler";
	cout <<endl << "Kargo"; 
	cout <<endl << "----------------";
	cout <<endl << "Pilihan : ";
	cin >> ekspedisi_pilihan;
	
	if(ekspedisi_pilihan == "Hemat" || ekspedisi_pilihan == "hemat") {
		cout <<endl << "Paket akan diterima dalam 3-6 hari";
		cout <<endl << "Dikenakan Rp.12,000";
		ongkir = 12000;
	} else if(ekspedisi_pilihan == "Reguler" || ekspedisi_pilihan == "reguler") {
		cout <<endl << "Paket akan diterima dalam 3-6 hari";
		cout <<endl << "Dikenakan Rp.16,000";
		ongkir = 16000;
	} else if(ekspedisi_pilihan == "Kargo" || ekspedisi_pilihan == "kargo") {
		cout <<endl << "Paket akan diterima dalam 3-5 hari";
		cout <<endl << "Dikenakan Rp.24,000";
		ongkir = 24000;
	} else {
		cout << "Inputan tidak valid! Silahkan memilih kembali" <<endl;
		goto ulang;
	}
	
	// Voucher[diskon] dan Gratis Ongkir dengan ketentuan tertentu
	cout <<endl <<endl;
	cout << "Apakah anda ingin menggunakan voucher(diskon)? [Y/N] : ";
	cin >> ValidasiDiskon;
	
	if(ValidasiDiskon == 'Y' || ValidasiDiskon == 'y') {
		if(total_akhir > 20000 && total_akhir <= 40000 ){
			cout <<"Mendapatkan Voucher[diskon] 15%\n";
			potong_ongkir = ongkir * 1;
			diskon = 0.15 * total_akhir;
		} else if(total_akhir > 40000 && total_akhir <= 80000) {
			cout <<"Mendapatkan Voucher[diskon] 30% dan 25% Potongan Ongkir\n";
			potong_ongkir = ongkir * 0.25;
			diskon = 0.30 * total_akhir;
		} else if(total_akhir > 80000) {
			cout <<"Mendapatkan Voucher[diskon] 45% dan Gratis Ongkir\n";
			potong_ongkir = ongkir * 0;
			diskon = 0.45 * total_akhir;
		} else {
			cout << "Tidak mendapat potongan ...";
		}
	} else {
		return 0;
	}
	
	// Asuransi / Proteksi
	cout <<endl;
	cout << "Terapkan asuransi proteksi barang? [Y/N] : ";
	cin >> ValidasiAsuransi;
	
	if(ValidasiAsuransi == 'Y' || ValidasiAsuransi == 'y')  {
		cout << "Proteksi barang telah diterapkan!";
		asuransi = 7000;
	} else {
		cout << "Tidak menggunakan proteksi asuransi!";
		asuransi = 0;
	}
	
	// Metode Pembayaran
	cout << "\n\n";
	cout << "Metode Pembayaran";
	cout <<endl << "----------------";
	cout <<endl << "ShopeePay";
	cout <<endl << "Transfer Bank";
	cout <<endl << "Alfamart / Alfamidi";
	cout <<endl << "Indomart / I.saku"; 
	cout <<endl << "----------------";
	cout <<endl << "Pilihan : ";
	cin.ignore();
	getline(cin, mt_bayar);
	
	// Goto Pembayaran
	cout <<endl << "Menuju ke page pembayaran ... ";
	getch();
	system("cls");
	payment();
}

int implementasi::payment() {
	// Page Bill Payment[Pembayaran]
	cout << "------------------";
	cout <<endl << "Page :: Payment";
	cout <<endl << "------------------";
	cout <<endl << "Alamat	= " << alamat <<endl;
	cout  << "------------------";
	
	for(int i=0; i<jumlah_beli; i++) {
		cout <<endl << "Order list ke-" << i+1;
		cout <<endl << "Nama Barang \t= " << barang[i];
		cout <<endl << "Jumlah satuan \t= " << jumlah_satuan[i];
		cout <<endl << "Harga satuan \t= Rp." << harga[i];
		cout <<endl << "Sub total \t= Rp." <<sub_total[i];
		cout <<endl;	
	}
	cout <<endl << "---------------------" <<endl;
	cout << "Opsi Pengiriman = " << ekspedisi_pilihan <<endl;
	cout << "Ongkos kirim \t= Rp." << ongkir <<endl;
	cout << "Total Ongkir \t= Rp." << potong_ongkir <<endl;
	cout << "Voucher[diskon] = Rp." << diskon <<endl;
	cout << "Biaya Proteksi \t= Rp." << asuransi <<endl;
	cout << "Metode bayar \t= " << mt_bayar <<endl;
	
	// Total pembayaran
	pembayaran = total_akhir - diskon + potong_ongkir + asuransi;
	cout <<endl << "Total Pembayaran = Rp." << pembayaran;
	cout <<endl << "----------------------";
	cout <<endl << "\t\t [Jumlah Saldo : Rp." << saldo << "]";
	cout <<endl << "\t\t\t Kembali : Rp." << saldo - pembayaran;
	cetak();
}

int implementasi::cetak() {
	// Cetak Struk
	print.open ("struk.txt", ios::trunc);
	print << "--------------------";
	print <<endl << "STRUK PEMBAYARAN";
	print <<endl << "--------------------";
	print <<endl << "Alamat	= " << alamat <<endl;
	print  << "------------------";
	print <<endl << "Produk dipesan :";
	print <<endl << "-";
	for(int i=0; i<jumlah_beli; i++) {
		print <<endl << "Order list ke-" << i+1;
		print <<endl << "Nama Barang \t= " << barang[i];
		print <<endl << "Jumlah satuan \t= " << jumlah_satuan[i];
		print <<endl << "Harga satuan \t= Rp." << harga[i];
		print <<endl << "Sub total \t= Rp." <<sub_total[i];
		print <<endl;	
	}
	print <<endl << "---------------------" <<endl;
	print << "Opsi Pengiriman = " << ekspedisi_pilihan <<endl;
	print << "Ongkos kirim \t= Rp." << ongkir <<endl;
	print << "Total Ongkir \t= Rp." << potong_ongkir <<endl;
	print << "Voucher[diskon] \t= Rp." << diskon <<endl;
	print << "Biaya Proteksi \t= Rp." << asuransi <<endl;
	print << "Metode bayar \t= " << mt_bayar <<endl;
	print <<endl << "Total Pembayaran = Rp." << pembayaran;
	print <<endl << "----------------------";
	print <<endl << "\t\t [Jumlah Saldo : Rp." << saldo << "]";
	print <<endl << "\t\t\t Kembali : Rp." << saldo - pembayaran;
	print.close();
	cout <<"\n\n";
	cout << "Program telah tercetak ...";
	getch();
}

int main() {
	implementasi imp;
	imp.login();
}
