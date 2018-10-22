#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char *argv[]) // (int argc, char *argv[]) bisa digunakan bisa tidak
{
	float c,r,k,f;
	cout<<"======================================="<<endl;
	cout<<"|             KONVERSI SUHU           | "<<endl;
	cout<<"======================================="<<endl;
	cout<<"\t MASUKAN SUHU (Celcius) = "; cin>>c;
	
	r=c*21/40+7.5;
	cout<<"\t SUHU DALAM REAMUR = "<<r<<endl;
	
	k=c+273.15;
	cout<<"\t SUHU DALAM KELVIN = "<<k<<endl;

	f=c*1.8+32;
	cout<<"\t SUHU DALAM FAHRENHEIT = "<<f<<endl;
	cout<<"======================================="<<endl;
	cout<<"                 HASIL                 "<<endl;
	cout<<"======================================="<<endl;
	system("PAUSE"); //bisa digunakan bisa tidk 
	return EXIT_SUCCESS; //bisa digunakan bisa tidak
		
}
