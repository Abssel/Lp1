#include <iostream>

using namespace std;

int main()
{
  int salto, distan, conta;
  
  cout << "Ingrese la distancia que recorrio ==> ";
  cin >> distan;
  
  if(distan > 0){
    distan -= 1;
    salto+= 1;
    
    conta = 1;
    
    while(distan > 0){
        if(distan >= 3){
            distan -= conta * 3;
            salto += 1;
        }else{
            distan = 0;
            salto += 1;
        }
        conta += 1;
    }
    
    cout << "La cantidad de saltos necesarios es: " << salto;
  }
  return 0;
}
