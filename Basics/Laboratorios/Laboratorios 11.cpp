#include<iostream>
using namespace std;


int square(int);
double sqrt(double);

int main(){
	int x=square(44);
	double y=sqrt(2.5);
	cout<<x<<endl<<y;
}



int square(int x){
	int suma=0;
	for(int i=0;i<x;i++){
		suma=suma+x;	
		
	}
	return suma;
}

double sqrt(double x){
	return x*x;
}
