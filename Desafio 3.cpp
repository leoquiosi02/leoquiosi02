#include <iostream>

using namespace std;

int main()
{
   
    float nota1, nota2, nota3, nota4;

    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;
    cout << "Digite a segunda nota: " << endl;
    cin >> nota2;
    cout << "Digite a terceira nota: " << endl;
    cin >> nota3;
    cout << "Digite a quarta nota: " << endl;
    cin >> nota4;
    
    float media = (nota1 + nota2 + nota3 + nota4) /4;
    
    cout << "Media Final: \n" << media << endl;
    
    if (media >= 60){
    cout << "Aprovado" << endl;
    }
    else {
    cout << "Reprovado" << endl;
    }
    
    return 0;

}
