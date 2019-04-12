#include <iostream>
using namespace std;

int square(int x)
{
    int resultado = 0;
    for (int i = 1; i <= x; i++)
    {
        resultado += x;
    }
    return resultado;
}

int main()
{
    cout << 6 << '\t' << square(6) << endl;
    return 0;
}
