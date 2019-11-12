#include <iostream>
using namespace std;

int main (){
	cout<<"====================================="<<endl;
	cout<<"program      : var_global.cpp		"<<endl;
	cout<<"programmer   : Abi Yazid Busthomi	"<<endl;
	cout<<"NPM          : 18630781				"<<endl;
	cout<<"Kelas        : 3B Nonreg BJB			"<<endl;
	cout<<"Dibuat Tgl   : Kamis, 7 November 2019 "<<endl;
	cout<<"====================================="<<endl;
	cout<<""<<endl;
}
	int A;
	
	void test(){
		A = 20;
		cout<<"Nilai A didalam fungsi test()          : "<< A <<endl;
}
	int main(){
		A = 10;
		cout<<"Nilai A didalam fungsi main()          : "<< A <<endl;
		test();
	
	return 0;
}
