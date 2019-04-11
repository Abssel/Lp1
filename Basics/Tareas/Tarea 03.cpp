#include <iostream>
#include <string>

using namespace std;
int main(){
    int n, m;
	int resul;

	cout<<"Ingrese el valor entero de N ;teniendo en cuenta que las carpetas estan en N*M => ";
    cin>>n;
    if ( n ){
    	cout<<"Ingrese el valor entero de M ;teniendo en cuenta que las carpetas estan en N*M => ";
    	cin>>m;
    	if ( m ){
    		resul=n*m;
			
    		if(resul%2==0){
    		cout<<n<<" * "<<m<<" -> "<<"SI";	
			}
			else{
			cout<<n<<" * "<<m<<" -> "<<"NO";		
			}
		}
		else{
    		cout<<"Error al ingresar el valor de M(solo ENTEROS) ";}
    }else{
    	cout<<"Error al ingresar el valor de N(solo ENTEROS) ";
	}
	return 0;
}
