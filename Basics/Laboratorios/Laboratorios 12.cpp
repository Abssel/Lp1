#include<iostream>
using namespace std;

void print_square(int x){
	int suma=0;
	for(int i=0;i<x;i++){
		suma=suma+x;	
		
	}
	cout<<x<<'\t'<<suma<<endl;
}

int main(){
	for(int i=0;i<100;i++) print_square(i);
}
