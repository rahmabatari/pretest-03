/*
Program		: PreTest 03
Nama		: Rahma Batari
NPM			: 140810180051
Kelas		: A
Tanggal Buat: 12 Maret 2019
Deskripsi	:
*/

#include <iostream>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData (int& n){
	cout<<"Masukkan banyak data: "; cin>>n;
}

void inputMhs (LarikMhs& mhs, int n){
	for (int i=1; i<n; i++){
		cout<<"Data mahasiswa ke " << (i+1) <<endl;
		cout<<"NPM	: "; cin>>mhs[i].npm;
		cout<<"Nama	: "; cin>>mhs[i].nama;
		getline (cin, mhs.nama);
		cout<<"IPK	: "; cin>>mhs[i].ipk;
	}
}

void cetakMhs(LarikMhs& mhs, int n){
cout<<" Data Mahasiswa "<<endl;
cout<<"======================================================"<<endl;
cout<<"No    NPM                  Nama                IPK "<<endl;
cout<<"------------------------------------------------------"endl;
cout << (i+1)<< mhs[i].npm<<"|"<<mhs[i].nama<<"|"<<mhs[i].ipk<<endl;
}

void sortNPM(LarikMhs& mhs, int n){
	
}

int main(){
	
 int n;
    banyakData(n);
    inputMhs(mhs,n);
    sortNPM(mhs,n);
    cetakMhs(mhs,n);
    return 0;
	
}
