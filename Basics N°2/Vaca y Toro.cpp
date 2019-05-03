#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
 
int main (){
	int CANTIDAD=4;
	double muestra [CANTIDAD];
	int numero;
	int p;
	srand(time(NULL));
	for(p=0 ; p < CANTIDAD ; p++)
	{	
		numero = 1 + rand() % (100 - 1);
		muestra[p]=numero;
   }
   int usuario[4];
   int i,x;
   
   for ( i=0; i <=3; i++) {
   	cout<<"Ingrese un numero: ";
   	cin>>x;
   	usuario[i]=x;
   }
   for(i=0; i<=3; i++){
   	cout<<usuario[i]<<" ";
   }
   int vacas=0, toros=0;
   


