
#include "../include/Carro.hpp"

int Carro::quantidade;

Carro::Carro(string cor){
    this->cor = cor;
    this->quantidade +=1;
}

Carro::Carro(){
    this->cor = "Branco";
    this->quantidade +=1;
}

void Carro::acelera(int velocidade){
    this->velocidade += velocidade;
}

void Carro::freia(int velocidade){
    this->velocidade -= velocidade;
}

void Carro::ligaCarro(){
    motor.partida();
}
