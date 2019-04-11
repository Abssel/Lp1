#include <iostream>
using namespace std;


/*Usa el ejemplo anterior como modelo para un programa que convierte
yenes, euros, y libras en dolares. Para que sea mas real puedes usar las
tasas de conversion del dia de hoy.*/

int main()
{
	char moneda;
	char monedad;
	float canti;
	cout<<"Ingrese el tipo de moneda que quiere convertir(Euros(E),Libras(L),Yenes(Y),Shekels(S),Dolar(D): ";
	cin>>moneda;
	
	
	switch(moneda){
	case 'E':{
		cout<<"Ingrese la cantidad de dinero: ";
		cin>>canti;
		canti=1.12*canti;
		cout<<"La cantidad convertida es: "<<canti<<" Euros";
		break;
	}
	case 'L':{
		cout<<"Ingrese la cantidad de la divisa: ";
		cin>>canti;
		canti=canti=1.32*canti;
		cout<<"La cantidad convertida es: "<<canti<<" Libras";
		break;
	}
	case 'Y':{
		cout<<"Ingrese la cantidad de dinero: ";
		cin>>canti;
		canti=0.0090*canti;
		cout<<"La cantidad convertida es: "<<canti<<" Yenes(¥)";
		break;
	}	
	case 'S':{
		cout<<"Ingrese la cantidad de dinero: ";
		cin>>canti;
		canti=0.28*canti;
		cout<<"La cantidad convertida es: "<<canti<<" Shekels(¤)";
		break;
	}	
	case 'D':{
		cout<<"Ingrese la cantidad de dinero: ";
		cin>>canti;
		cout<<"Ingrese el tipo de moneda al cual quiere convertir(Euros(E),Libras(L),Yenes(Y),Shekels(S): ";
		cin>>monedad;
		
		switch(monedad){
			case 'E':{
				canti=0.89*canti;
				cout<<"La cantidad convertida es: "<<canti<<" Euros";
				break;
			}
			case 'L':{
				canti=canti=0.76*canti;
				cout<<"La cantidad convertida es: "<<canti<<" Libras";
				break;
			}
			case 'Y':{
				canti=111.46*canti;
				cout<<"La cantidad convertida es: "<<canti<<" Yenes";
				break;
			}	
			case 'S':{
				canti=3.60*canti;
				cout<<"La cantidad convertida es: "<<canti<<" Shekels";
				break;
				
			}
			default:
				cout<<"No reconozco la unidad";
		}
	break;	
	}
	default: 
		cout<<"No reconozco la unidad";
}
	return 0;
}
