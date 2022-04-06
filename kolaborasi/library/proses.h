using namespace std;

class Proses {
    public :
    void cetak() {
        cout <<"Anda sebagai Proses \n";
    }

    void getData() {
        ambil_data.open("../dummy/out_input.txt");
        bool ayam_goreng = true;
        while(!ambil_data.eof()) {
            if(ayam_goreng) {
                 ambil_data >> bnyk_ayamGr;
                 ayam_goreng = false;
            } else {
                ambil_data >> bnyk_ayamBk;
            }
        }
        ambil_data.close();
    }

    void toFile() {
        int total = (hrg_ayamGr * bnyk_ayamGr) + (hrg_ayamBk * bnyk_ayamBk);
        float batas = 45000;
        float t2 = float(total);
        float diskon = t2 * 0.1;

        if(total >= batas)
            t2 = t2 * diskon;

        tulis_data.open("../pra_data/proses.txt");
        tulis_data << total <<endl;
        tulis_data << diskon <<endl;
        tulis_data << t2 <<endl;
        tulis_data << bnyk_ayamGr <<endl;
        tulis_data << bnyk_ayamBk;
        tulis_data.close();
    }

    private : 
        ifstream ambil_data;
        ofstream tulis_data;
        int bnyk_ayamGr;
        int bnyk_ayamBk;
        int hrg_ayamGr = 17000;
        int hrg_ayamBk = 21000;
};
