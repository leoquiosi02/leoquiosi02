#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float num1, num2;
    
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;
    
    float soma = num1 + num2;
    float primeiro_vs_quadrado_segundo = num1 * pow (num2, 2);
    float quadrado_primeiro = pow (num1, 2);
    float soma_quadrados = pow (num1, 2) + pow (num2, 2);
    float seno_sub_valores = sin(num1 - num2);

    cout << "Resultados!" << endl;
    cout << "a) " << soma << endl;
    cout << "b) " << primeiro_vs_quadrado_segundo << endl;
    cout << "c) " << quadrado_primeiro << endl;
    cout << "d) " << soma_quadrados << endl;
    cout << "e) " << seno_sub_valores << endl;
    
    return 0;
    
}    
