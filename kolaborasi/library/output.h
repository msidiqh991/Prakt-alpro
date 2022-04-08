using namespace std;

class Output {
    public :
    void cetak() {
        cout << "- STRUK PEMBELIAN WARUNG X - \n";
        cout << "-----------------------------\n";
        cout << "Yang dibeli : \n";
        cout << "-------------\n";
        cout << "[1] Ayam Geprek        -> " << data_file[6] <<endl;
        cout << "[2] Ayam Goreng        -> " << data_file[7] <<endl;
        cout << "[3] Udang Goreng       -> " << data_file[8] <<endl;
        cout << "[4] Cumi Goreng        -> " << data_file[9] <<endl;
        cout << "[5] Ayam Bakar         -> " << data_file[10] <<endl;
        cout << "-------------------------------\n";
        cout << "Jarak tempuh rumah : " << data_file[11] <<" KM" <<endl;
        cout << "Harga Total        : Rp. " << data_file[0] <<endl;
        cout << "Diskon             : Rp. " << data_file[1] <<endl;
        cout << "Total - Diskon     : Rp. " << data_file[2] <<endl;;
        cout << "Ongkir             : Rp. " << data_file[3] <<endl;
        cout << "Ongkir - Potongan  : Rp. " << data_file[4] <<endl;
        cout << "--------------------" <<endl;
        cout << "Keseluruhan Harga  : Rp. " << data_file[5];
    }

    void getData() {
        ambil_data.open("../pra_data/proses.txt");
        while(!ambil_data.eof()) {
            ambil_data >> data_file[index];
            index += 1;
        }
        ambil_data.close();
    }

    private :
        ifstream ambil_data;
        ofstream tulis_data;
        string data_file[30];
        int index = 0;
};
