#include <iostream>
using std::string;

class participantes{
    string Nome;
    int Idade;
    int Tempo_GPDA;

    public:
        participantes(string nome, int idade, int tempo_gpda);
        void apresentar();
};

participantes::participantes(string nome, int idade, int tempo_gpda){
    Nome = nome;
    Idade = idade;
    Tempo_GPDA = tempo_gpda;

}

void participantes::apresentar(){
    std::cout << "Nome:" << Nome << std::endl;
    std::cout << "Idade:" << Idade << std::endl;
    std::cout << "Tempo no GPDA:" << Tempo_GPDA << std::endl;
}

int main(){
    participantes isadora = participantes("Isadora", 20, 1);
    isadora.apresentar();
}