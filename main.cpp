#include <iostream>
/* Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).*/
using namespace std;

int main()
{
    int numero,suma;
    cout << "ingrese un numero " << endl;
    cin>> numero;
    for (int i=0;i<=numero ;i++ ) {
      suma=suma+i;
    }
    cout<<"la sumatoria desde 0 hasta "<<numero<<" es "<< suma<<endl;
    cout<<"la sumatoria desde 0 hasta "<<numero<<" es "<< suma<<endl;
    return 0;
}
