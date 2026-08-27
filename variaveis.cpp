#include <iostream>

int main(){
    //Na programação, variáveis são usadas para armazenar valores de dados. Cada variável possui um tipo de dado, um nome de variável e armazena um valor.

    // Tipos de Dados
    int age = 22;
    int year = 2026;
    std::cout << age << std::endl;
    std::cout << year << std::endl;
    /* Um inteiro, ou , é um número inteiro. Não possui ponto decimal e contém o número 0, 
    números positivos e negativos de contagem. Se contássemos o número de pessoas no ônibus ou o número de jujubas em um pote,
    usaríamos a variavel int*/

    double pi = 3.14159;
    float peso = 66.5;
    std::cout << pi << std::endl;
    std::cout << peso << std::endl;
    /*double ou float: Um número de ponto flutuante, ou , é um número decimal. Pode ser usado para representar 
    frações ou medições precisas. Se você estivesse medindo o comprimento e a largura do sofá, calculando a 
    porcentagem da pontuação do teste ou armazenando a média de rebatidas de um jogador de beisebol, 
    usaríamos double ou float em vez de usar int.*/

    char porcentagem = '%';
    char cifrao = '$';
    std::cout << porcentagem << std::endl;
    std::cout << cifrao << std::endl;
    /* Um caractere, ou , é usado para armazenar caracteres individuais. Os caracteres são encapsulados em aspas 
    simples ''*/

    std::string nome = "Meu nome é André Felipe";
    std::string nascimento = "Nasci no Brasil";
    std::cout << nome << std::endl;
    std::cout << nascimento << std::endl;
    /*string é usado para armazenar texto (sequência de caracteres). As strings são enroladas em aspas duplas . 
    A razão disso é porque vem da biblioteca padrão de C++ e nem sempre fez parte do C++. string"" std::string*/

    bool vivo = true;
    bool morto = false;
    std::cout << vivo << std::endl;
    std::cout << morto << std::endl;
    /* O tipo de dado bool (booleano) é utilizado para representar valores lógicos.
    Uma variável bool só pode assumir dois valores: true (verdadeiro) ou false (falso).*/








}