Compilar e Executar
# Introdução
No mundo do C++, dois termos frequentemente surgem que são essenciais para o processo de desenvolvimento de software: compilar e executar. Vamos analisar o que eles significam e por que são importantes.

C++ é uma linguagem compilada.

Isso significa que, para fazer um programa rodar, você deve primeiro traduzi-lo da forma legível por humanos para algo que uma máquina possa "entender". Essa tradução é feita por algo chamado compilador.

O código que você escreve é chamado de código-fonte (geralmente está em uma linguagem mais parecida com o inglês, como C++), e o que o computador executa é chamado de código de máquina, ou simplesmente executável.

Todo o processo deveria ser assim:

1° Escreva um pouco de código.
2° Salve o programa.
3° Compilar e executar.
4° Repita.

Os arquivos do código-fonte têm a extensão .cpp como calculator.cpp.
Os arquivos de código de máquina têm a extensão .out como calculator.out.

# Executando o Hello World no Terminal
## Compilar
Um compilador traduz o programa C++ para código em linguagem de máquina. Podemos fazer isso no terminal.

Para compilar um arquivo, precisamos digitar g++ seguido do nome do arquivo e pressionar enter: // g++ helloworld.cpp

-> O compilador então traduz o programa hello.cpp C++ e cria um arquivo de código de máquina chamado a.out.

## Executar
Para executar um arquivo de código de máquina, precisamos digitar ./ e o nome do arquivo de código de máquina e pressionar enter:

./helloworld

E o código deve rodar no terminal!