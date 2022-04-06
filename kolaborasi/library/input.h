using namespace std;

class Input {
    public :
    void cetak() {
        cout << "Aplikasi Penjualan Rumah Makan \n";
        cout << "Menu yang tersedia : \n";
        cout << "[1] Ayam Goreng Rp. 17,000 \n";
        cout << "[2] Ayam Bakar  Rp. 21,000 \n\n";
        cout << "Pesan Ayam Goreng -> ";
        cin >> bnyk_ayamGr;
        cout << "Pesan Ayam Bakar -> ";
        cin >> bnyk_ayamBk;
    }

    void toFile() {
        tulis_data.open("../pra_data/input.txt");
        tulis_data << bnyk_ayamGr <<endl;
        tulis_data << bnyk_ayamBk;
        tulis_data.close();
    }

     private :
        ofstream tulis_data;
        int bnyk_ayamGr;
        int bnyk_ayamBk;
};