#include <iostream>
#include <string>


using namespace std;

class Mahasiswa{
    public:
        string nama;
        double IPK;

    //Constructor
    Mahasiswa(string nm, double ip){
        Mahasiswa::nama = nm;
        Mahasiswa::IPK = ip;
    }


    //method tanpa parameter dan tanpa return
    void tampilData(){
        cout << nama << endl;
        cout << IPK << endl;
    }


    //method dengan parameter dan tanpa return
    void changeName(const char*  nmm){ //using pointer
        Mahasiswa::nama = nmm;
    }

    //method tanpa parameter dan dengan return
    string tampilNama(){
        return Mahasiswa::nama;
    }
    double tampilIPK(){
        return IPK;
    }


    //method dengan parameter dan dengan return
    double nambahIPK(const  double &ipkBaru){
       return  IPK + ipkBaru;
    }

};




int main(int argc, char const *argv[])
{
    /* code */
    Mahasiswa mhs = Mahasiswa("Imem",3.8) ;

    //panggil fungsi tanpa param dan tanpa return
    mhs.tampilData();



    //panggil fungsi dengan param dan tanpa return
    cout << "======================\n";
    cout << "nama yang tadinya " << mhs.nama << " jadi  : ";
    mhs.changeName("imamnurcakra");
    mhs.tampilData();


    //panggil fungsi tanpa param dan dengan return
    cout << "======================\n";
    string nma = mhs.tampilNama();
    cout << "tampil nama tanpa param dengan return: " <<  nma << endl;
    cout << "tampil IPK tanpa param dengan return: " <<  mhs.tampilIPK() << endl;


    //panggil fungsi dengan  param dan dengan return

    cout << "======================\n";
    cout << nma << "\n";
    cout << mhs.nambahIPK(4.0) << "\n" ;


    return 0;
}
