#include<iostream>
using namespace std;
int main(){
	char letra='a';
	int cambio=letra;
	char mayus='A';
	int cambio2=mayus;
	
	for(letra='a';letra<='z';letra++){
		cambio=letra;
		cout<<letra<<"   "<<cambio<<endl;
	}
	cout<<endl;
	
	for(mayus='A';mayus<='Z';mayus++){
		cambio2=mayus;
		cout<<mayus<<"   "<<cambio2<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<10;i++){
		cout<<i<<endl;
	}
}
