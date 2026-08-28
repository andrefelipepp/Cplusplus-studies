#include <iostream>
#include <iomanip>

int main(){
    double nota1;
    double nota2;
    double nota3;
    double media;

    std::cout << "Entre com a nota da unidade 1: ";
    std::cin >> nota1;
    std::cout << "Entre com a nota da unidade 2: ";
    std::cin >> nota2;
    std::cout << "Entre com a nota da unidade 3: ";
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    std::cout << "Média: " << std::fixed << std::setprecision(2) << media << std::endl;

    return 0; 
}