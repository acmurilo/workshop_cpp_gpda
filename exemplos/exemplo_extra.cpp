#include <iostream>
using std::string;

class exemplo{

    public:
        int x, y;

        exemplo(int x, int y);
        int soma();

        void imprimir();
};

exemplo::exemplo(int x, int y){
    this->x = x; //o this-> é uma outra forma de referenciar
    this->y = y; //uma variavel dentro da classe
}

int exemplo::soma(){
    int adicao = x + y;
    return adicao;

}

void exemplo::imprimir(){
    std::cout << x << std::endl;
}


int main(){
    exemplo par = exemplo(3, 4);
    //testando_this par(3, 4);
    int sum = par.soma();
    std::cout << sum << std::endl;

}