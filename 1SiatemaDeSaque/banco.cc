#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class contaBancaria
{
public:
    contaBancaria(double saudoInicial): saldo(saudoInicial){}
    void desposito(double valor){
        saldo+=valor;
    }
    double consultarSaldo(){
        return saldo;
    }

public:
 void valorDeposito(){
     cout << "Digite o valor de deposito: ";
     double valor;
     cin >> valor;
     desposito(valor);
 }
private:
    double saldo;
};

int main(){
    contaBancaria minhaConta(1000);
    minhaConta.valorDeposito();
    cout<< "Saldo Atual " << minhaConta.consultarSaldo() << endl;

return 0;
}