using namespace std;

class Input {
    public :
    void cetak() {
        cout << "Aplikasi Penjualan Rumah Makan \n";
        cout << "Menu yang tersedia : \n";
        cout << "[1] Ayam Geprek  | Rp. 21,000 \n";
        cout << "[2] Ayam Goreng  | Rp. 17,000 \n";
        cout << "[3] Udang Goreng | Rp. 19,000 \n";
        cout << "[4] Cumi Goreng  | Rp. 20,000 \n";
        cout << "[5] Ayam Bakar   | Rp. 25,000 \n\n";    
        // in    
        cout << "Pesan Ayam Geprek -> ";
        cin >> bnyk_ayamGp;
        cout << "Pesan Ayam Goreng -> ";
        cin >> bnyk_ayamGr;
        cout << "Pesan Udang Goreng -> ";
        cin >> bnyk_udgGr;
        cout << "Pesan Cumi Goreng -> ";
        cin >> bnyk_cmiGr;
        cout << "Pesan Ayam Bakar -> ";
        cin >> bnyk_ayamBk;
        cout << "Total Jarak yang ditempuh : ";
        cin >> jarak;
    }

    void toFile() {
        tulis_data.open("../pra_data/input.txt");
        tulis_data << bnyk_ayamGp <<endl;
        tulis_data << bnyk_ayamGr <<endl;
        tulis_data << bnyk_udgGr <<endl;
        tulis_data << bnyk_cmiGr <<endl;
        tulis_data << bnyk_ayamGr <<endl;
        tulis_data << bnyk_ayamBk <<endl;
        tulis_data << jarak;
        tulis_data.close();
    }

     private :
        ofstream tulis_data;
        int bnyk_ayamGp;
        int bnyk_ayamGr;
        int bnyk_udgGr;
        int bnyk_cmiGr;
        int bnyk_ayamBk;
        int jarak;
};