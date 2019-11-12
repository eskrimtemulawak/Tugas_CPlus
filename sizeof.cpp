#include <iostream>
using namespace std;
#define PANJANG 10
#define LEBAR 20

int main (){
	cout<<"===================================="<<endl;
	cout<<"program      : sizeof.cpp			"<<endl;
	cout<<"programmer   : Abi Yazid Busthomi	"<<endl;
	cout<<"NPM          : 18630781				"<<endl;
	cout<<"Kelas        : 3B Nonreg BJB			"<<endl;
	cout<<"Dibuat Tgl   : Kamis, 7 November 2019 "<<endl;
	cout<<"====================================="<<endl;
	cout<<""<<endl;

	cout<<"===============================================\n"<<endl;
	cout<<"== Program Cek Ukkuran Memori Tiap TIpe Data ==\n"<<endl;
	cout<<"===============================================\n"<<endl;
	cout<<""<<endl;
	
	cout<<"Ukuran Memori dari int \t\t\t       : "<<sizeof(int)<<endl;
	cout<<"Ukuran Memori dari unsigned int \t       : "<<sizeof(unsigned int)<<endl;
	cout<<"Ukuran Memori dari signed int \t\t       : "<<sizeof(signed int)<<endl;
	cout<<"Ukuran Memori dari short int \t\t       : "<<sizeof(short int)<<endl;
	cout<<"Ukuran Memori dari unsigned short int \t       : "<<sizeof(unsigned short int)<<endl;
	cout<<"Ukuran Memori dari signed short int \t       : "<<sizeof(signed short int)<<endl;
	cout<<"Ukuran Memori dari long int \t\t       : "<<sizeof(long int)<<endl;	
	cout<<"Ukuran Memori dari unsigned long int \t       : "<<sizeof(unsigned long int)<<endl;	
	cout<<"Ukuran Memori dari signed long int \t       : "<<sizeof(signed long int)<<endl;
	cout<<"Ukuran Memori dari float \t\t       : "<<sizeof(float)<<endl;
	cout<<"Ukuran Memori dari double \t\t       : "<<sizeof(double)<<endl;
	cout<<"Ukuran Memori dari long double \t\t       : "<<sizeof(long double)<<endl;
	cout<<"Ukuran Memori dari char \t\t       : "<<sizeof(char)<<endl;
	cout<<"Ukuran Memori dari unsigned char \t       : "<<sizeof(unsigned char)<<endl;
	cout<<"Ukuran Memori dari signed char \t\t       : "<<sizeof(signed char)<<endl;
	cout<<"Ukuran Memori dari wchar_t \t\t       : "<<sizeof(wchar_t)<<endl;
	
	return 0;
}
