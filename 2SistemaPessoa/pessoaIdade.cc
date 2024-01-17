#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    std::string nome;

public:
    // Construtor
    Pessoa(const std::string& nome) : nome(nome) {
        std::cout << "Pessoa criada com nome: " << this->nome << std::endl;
    
    }
    // Destrutor
    ~Pessoa() {
        std::cout << "Pessoa destruída: " << this->nome << std::endl;
    }
};

class Idade
{
private:
    int idade;
public:
    Idade(int idade) : idade(idade)
    {
    cout <<"Idade da pessoa: "<< this->idade << endl;
    }
    
     
};

int main() 
{
    // Instanciando um objeto da classe Pessoa com um nome
    Pessoa pessoa("Nathy");
    Idade idade (21);
    return 0;
}
