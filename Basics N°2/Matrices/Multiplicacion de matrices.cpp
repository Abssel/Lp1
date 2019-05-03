#include<iostream>
#include <iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int fila, columna, col;

    cout<<"Ingrese las filas de la matriz A: "<<endl;
	cin>>fila;
    cout<<"Ingrese las columnas de la matriz A: "<<endl;
	cin>>columna;
    for(int i=0; i<fila; ++i)
        for(int j=0; j<columna; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }

    cout<<"Ingrese las filas de la matriz B: "<<col<<" (ya esta definido )"<<endl;
    cout<<"Columnas de B: "<<endl;
	cin>>col;
    for(int i=0; i<columna; ++i)
        for(int j=0; j<col; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }

    // Inicializamos la matriz C.
    for(int i=0; i<fila; ++i)
        for(int j=0; j<columna; ++j)
            c[i][j] = 0;

    
    for(int i=0; i<fila; ++i)
        for(int j=0; j<columna; ++j)
            for(int k=0; k<col; ++k)
                c[i][j] += a[i][k] * b[k][j];

    for(int i=0; i<fila; ++i){
        for(int j=0; j<col; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<col; ++i){
        for(int j=0; j<columna; ++j) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz C: ";
    for(int i=0; i<fila; ++i){
        for(int j=0; j<columna; ++j){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
