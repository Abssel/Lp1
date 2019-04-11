#include <iostream>
using namespace std;


/*Usa el ejemplo anterior como modelo para un programa que convierte
yenes, euros, y libras en dolares. Para que sea mas real puedes usar las
tasas de conversion del dia de hoy.*/

int main()
{
	string moneda;
	float canti;
	cout<<"Ingrese el tipo de moneda que quiere convertir(Euros,Yenes,Libras): ";
	cin>>moneda;
	if (moneda=="libras" or moneda == "Libras" or moneda== "Yenes" or moneda=="yenes"or moneda == "euros" or moneda== "Euros")
	{
	
		cout<<"Ingrese la cantidad a cambiar a dolares:";
		cin>>canti;
		if (moneda == "euros" or moneda== "Euros" )
		{
			canti=1.12*canti;
			cout<<"La cantidad ingresada convertida es: "<<canti<<"$";
		}
		if (moneda == "yenes" or moneda== "Yenes" )
		{
			canti=0.0090*canti;
			cout<<"La cantidad ingresada convertida es: "<<canti<<"$";
		}
			
		if (moneda == "libras" or moneda== "Libras" )
		{
			canti=1.32*canti;
			cout<<"La cantidad ingresada convertida es: "<<canti<<"$";
		}
}
	else{
		cout<<"Error al ingresar el tipo de moneda ";
	}		
			
	return 0;
}
