#include<iostream>
using namespace std;

int area(int length,int width);
int main(){
	int x=area(2,3);
}
//Funciones con mismo nombre pero diferentes tipos 
//no coiciden y son ignoradas.
}
double area(double x, double y){
	return x*y;
}
int area(int x,int y,char unit){
	return x*y;
}

