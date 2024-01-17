#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Pessoa {
public:
    // Construtor
    Pessoa(const string& nome) {
        this->nome = nome;
    }

    // Método para exibir o nome
    void exibirNome() {
        cout << "Pessoa criada com sucesso: " << this->nome << endl;
    }

private:
    string nome;
    // Destrutor não é necessário nesta implementação simples
};

int main() {
    // Criando uma instância da classe Pessoa
    Pessoa pessoa("nathy");
    // Exibindo o nome usando o método da classe
    pessoa.exibirNome();

    return 0;
}