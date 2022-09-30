#include <iostream>

using namespace std;

int le_valor_qtd (string nome_moeda){
int quantidade = 0;

do {
cout << nome_moeda << " : ";
cin >> quantidade;
}while (quantidade < 0);
return quantidade;
}

int main(){
    
cout << "Digite o numero de moedas: " << endl; 
  
int quant_Um = le_valor_qtd("1 Centavo");
int quant_Cinco = le_valor_qtd("5 Centavos");
int quant_Dez = le_valor_qtd("10 Centavos");
int quant_VinteCinco = le_valor_qtd("25 Centavos");
int quant_Cinquenta = le_valor_qtd("50 Centavos");
int quant_UmReal = le_valor_qtd("1 Real");

float valor_Total = quant_Um * 0.01;
valor_Total += quant_Dez * 0.10;
valor_Total += quant_VinteCinco * 0.25;
valor_Total += quant_Cinquenta * 0.50;
valor_Total += quant_UmReal;

cout << "Arthur voce tem: \n" << valor_Total << endl; 

return 0;

}
