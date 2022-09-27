#include <iostream>

using namespace std;

bool Operacao_valida(char operacao){
bool valida = operacao == '+' ||
              operacao == '-' ||
              operacao == '*' ||
              operacao == '/';
    return valida;
}

int main(){
    float valor1 = 0.0;
    float valor2 = 0.0;
    char operacao = ' ';
    cout << "Digite o primeiro valor: " << endl;
    cin >> valor1;
    
    while(!Operacao_valida(operacao)){
    cout << "Digite a operacao matematica: " << endl;    
    cin >> operacao;
    }
    
    cout << "Digite o segundo valor: " << endl;
    cin >> valor2;
    
    float resultado = 0.0;
    switch(operacao){
    case '+':
    resultado = valor1 + valor2;
    break;
    case '-':
    resultado = valor1 - valor2;
    break;
    case '*':
    resultado = valor1 * valor2;
    break;
    case '/':
    
    if (valor2 != 0){
    resultado = valor1 / valor2;
    }
    
    else {
    cout << "Operacao Invalida: Divisao \n" << endl;}
    break;
    }
    
    cout << "Resultado: \n" << resultado << endl;
    
    return 0;
    
}
