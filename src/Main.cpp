#include <iostream>
#include <string>
using namespace std;



// class without constructor
class Mahasiswa
{

public:
   string nama;
   string kampus;
   string NIM;
   double IPK;
};

// class with construct
class MahasiswaConstruct {

public:
    string nama;
    string kampus;
    string NIM;
    double IPK;

    //constructtor class 
    MahasiswaConstruct(string inNama, string inKampus, string inNIM, double inIPK ){
        MahasiswaConstruct::nama = inNama;
        MahasiswaConstruct::kampus = inKampus;
        MahasiswaConstruct::NIM = inNIM;
        MahasiswaConstruct::IPK = inIPK;
        
        cout << MahasiswaConstruct::nama << "\n" << MahasiswaConstruct::kampus << "\n" << MahasiswaConstruct::NIM << "\n" << MahasiswaConstruct::IPK << "\n";
    }


};

int main(){



    // without construct
    Mahasiswa mh;
    mh.nama = "otong";
    mh.kampus = "Bani saleh";
    mh.NIM = "43a87006210158";
    mh.IPK = 3.85;

    cout << mh.nama << "\n" <<  mh.kampus << "\n" << mh.NIM <<"\n" <<  mh.IPK << "\n";

    cout << "============================================================" << "\n";

    MahasiswaConstruct mhs = MahasiswaConstruct("Imam", "BaniSoleh", "43a87006210158", 3.85);



    return 0;
}