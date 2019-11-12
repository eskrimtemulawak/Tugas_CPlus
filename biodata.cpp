#include <iostream>
using namespace std;

int main()
{
	cout<<"====================================="<<endl;
	cout<<"program      : biodata.cpp			"<<endl;
	cout<<"programmer   : Abi Yazid Busthomi	"<<endl;
	cout<<"NPM          : 18630781				"<<endl;
	cout<<"Kelas        : 3B Nonreg BJB			"<<endl;
	cout<<"Dibuat Tgl   : Kamis, 7 November 2019 "<<endl;
	cout<<"====================================="<<endl;
	cout<<""<<endl;
	//Deklarasi Tipe Data Variabel
	string nama;
	int umur;
	char jk;
	
	//proses input
	cout<<"Siapakah Namamu? "<<endl;
	cout<<"Jawab               : ";	
	//menyimpan data kevariabel
	getline (cin,nama);
		
	cout<<"Berapa Umurmu? "<<endl;
	cout<<"Jawab               : ";
	cin >> umur;
	
	cout<<"Jenis Kelamin [L/P] : ";
	cin >> jk;
	
	//proses input
	cout<<"Salam kenal, "<< nama << " Sekarang engkau berusia ";
	cout<< umur << " dan kau berjenis kelamin "<< jk ;
	
	return 0;
}
