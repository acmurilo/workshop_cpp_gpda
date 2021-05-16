#include <iostream>
using std::string;

class participantes{
    public:
        string Nome;
        int Idade;
        int Tempo_GPDA;
        void apresentar();
};

void participantes::apresentar(){
    std::cout << "Nome:" << Nome << std::endl;
    std::cout << "Idade:" << Idade << std::endl;
    std::cout << "Tempo no GPDA:" << Tempo_GPDA << std::endl;
}

int main(){
    participantes isadora;
    isadora.Nome = "Isadora";
    isadora.Idade = 20;
    isadora.Tempo_GPDA = 1;
    isadora.apresentar();
}