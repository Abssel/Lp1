#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
  int entero = 10;
  string cadena = " ";
   char string =0;
  cadena =string(entero); // C++11
  cout << "Esto es una cadena: " + cadena + "." <<endl;
 
  return 0;
}
