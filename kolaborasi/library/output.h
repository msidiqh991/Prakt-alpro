using namespace std;

class Output {
    public :
    void cetak(){
        tulis_data.open("../api_data.txt");
        tulis_data << "- STRUK PEMBELIAN WARUNG X - \n";
        tulis_data << "-----------------------------\n";
        tulis_data << "Yang dibeli : \n";
        tulis_data << "-------------\n";
        tulis_data << "[1] Ayam Geprek        -> " << data_file[6] <<endl;
        tulis_data << "[2] Ayam Goreng        -> " << data_file[7] <<endl;
        tulis_data << "[3] Udang Goreng       -> " << data_file[8] <<endl;
        tulis_data << "[4] Cumi Goreng        -> " << data_file[9] <<endl;
        tulis_data << "[5] Ayam Bakar         -> " << data_file[10] <<endl;
        tulis_data << "-------------------------------\n";
        tulis_data << "Jarak tempuh rumah : " << data_file[11] <<" KM" <<endl;
        tulis_data << "Harga Total        : Rp. " << data_file[0] <<endl;
        tulis_data << "Diskon             : Rp. " << data_file[1] <<endl;
        tulis_data << "Total - Diskon     : Rp. " << data_file[2] <<endl;;
        tulis_data << "Ongkir             : Rp. " << data_file[3] <<endl;
        tulis_data << "Ongkir - Potongan  : Rp. " << data_file[4] <<endl;
        tulis_data << "--------------------" <<endl;
        tulis_data << "Keseluruhan Harga  : Rp. " << data_file[5];
        tulis_data.close();
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
