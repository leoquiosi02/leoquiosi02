#include <iostream>

using namespace std;

int main()
{
    
    int a, b, c, menor, maior;

    cout << "Digite o primeiro valor: " << endl;
    cin >> a;
    cout << "Digite o segundo valor: " << endl;
    cin >> b;
    cout << "Digite o terceiro valor: " << endl;
    cin >> c;
    
    menor = a;
    maior = a;
    
    if(menor > b)
    menor = b;
    if(menor > c)
    menor = c;
    
    if(maior < b)
    maior = b;
    if(maior < c)
    maior = c;
    
    cout << "Maior Numero: \n" << maior << endl;
    cout << "Menor Numero: \n" << menor << endl;


    return 0;
    
}