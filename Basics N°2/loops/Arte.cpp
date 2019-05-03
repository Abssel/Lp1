#include<iostream>
#include<vector>
using namespace std;

vector<int> colores;
vector<int> resul;
 int main()
 {
    int can, color;
 	cout << "Ingrese la cantidad de posiciones: ";
 	cin >> can;

 	int posicion = 1;

 	while(can > 0){
        cout << "Ingrese el color de la posicion " << posicion << " : ";
        cin >> color;

        colores.push_back(color);

        int colors = 0;

        for(int i = 0; i < resul.size(); i++){
            if (color == resul[i]){
                colors++;
            }
        }
        if(colors <= 0){
            resul.push_back(color);
        }
        posicion++;
        can--;
 	}

 	if(colores.size() >= 3){
        if(resul.size() <= (colores.size() - 2)){
            cout << "Si se puede";
        }else{
            cout << "No se puede";
        }
 	}else{
        cout << "No se puede.";
 	}

 	return 0;
 }
