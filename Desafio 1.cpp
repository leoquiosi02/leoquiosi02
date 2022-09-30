#include <iostream>

using namespace std;

int main(){

    float valor_produto, valor_pago = 0.0;

    cout << "Digite o valor do produto: " << endl;
    cin >> valor_produto;
    cout << "Digite o valor pago: " << endl;
    cin >> valor_pago;

    float troco = valor_pago - valor_produto;

    if (troco > 0){
    cout << "O valor do produto e: " << troco << endl;
    }
    else {
    cout << "O valor pago e: " << -1 * troco << endl;
    }

    return 0;

}
