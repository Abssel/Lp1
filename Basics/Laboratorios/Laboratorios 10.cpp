#include<iostream>
using namespace std;


int square(int x){
	int suma=0;
	for(int i=0;i<x;i++){
		suma=suma+x;	
		
	}
	return suma;
}

void write_sorry(){
	cout<<"Sorry"<<endl;
}

int main(){
	cout<<square(2)<<endl;
	cout<<square(10)<<endl;
	square(2);
	int v1=square(5);
	//cout<<v1;
	write_sorry();
}
