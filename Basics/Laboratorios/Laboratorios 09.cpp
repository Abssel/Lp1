#include<iostream>
using namespace std;


int square(int x){
	int suma=0;
	for(int i=0;i<x;i++){
		suma=suma+x;	
		
	}
	return suma;
}

int main(){
	for (int i=0;i<100;i++){
		cout<<i<<'\t'<<square(i)<<'\n';
	}
}
