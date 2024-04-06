

#include<iostream>
#include <string>
#include <fstream>

using namespace std;

class MhsConstr{
	public:
		string nama;
		string kampus;
		string NIM;
		double IPK;

    //constructtor class 
    MhsConstr(string inNama, string inKampus, string inNIM, double inIPK ){
        //call with namespace
        MhsConstr::nama = inNama;
        MhsConstr::kampus = inKampus;
        MhsConstr::NIM = inNIM;
        MhsConstr::IPK = inIPK;
	}

	//Methods of MhsConstr
	string gs(){
		return MhsConstr::nama + " | " + MhsConstr::kampus + " | " +MhsConstr::NIM + " | " ;
	}
	double ggrd(){
		return MhsConstr::IPK;
	}
};


class Dbcon{
	//membaca
	public:
		ifstream in;
		ofstream out;
		string fn;

	// Constructor
	// option : can string or using char(pointer)
	Dbcon(const char* fN){
		Dbcon::fn = fN;
	}

	//tampil yang akan di save
	void sv(MhsConstr dt){

		//display want to write
		cout << dt.gs() << dt.ggrd() << "\n";
		//save file only
		Dbcon::out.open(Dbcon::fn,ios::app);
		//write content based saved file 
		Dbcon::out << dt.gs() << dt.ggrd() << "\n";
		//close the process
		Dbcon::out.close();
	}
};

int main() {

	string nM,kpS,nIm;
	double grd;

	//user input 
	cout << "Enter Data Students" << endl;
	cout << "Nama :"; getline(cin, nM); 
    cout << "Kampus :"; getline(cin, kpS); 
    cout << "NIM:"; getline(cin, nIm); 
    cout << "IPK:"; cin >> grd;

	//create obj for usr based input
	MhsConstr mhs = MhsConstr(nM, kpS, nIm, grd);


	//Create obj for db
	Dbcon dbs = Dbcon("data.txt");
	dbs.sv(mhs);

	return 0;
}	