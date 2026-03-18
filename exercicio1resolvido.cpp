#include <iostream>
using namespace std;

int main ()
{
char letra;
int codigo;

cout << "Digite uma letra: ";
cin >> letra;

// cout - saida de dados; cin - entrada de dados

codigo = (int) letra;

//codigo - está declarado como inteiro e para coseguir definir que leia o valor da tabela ASCII 
//e não o caratere padrão usamos o (int) para forçar a  converção da letra em números;

cout << "Código ASCII de '" << letra << "':" << codigo << endl;

// responsável por exibir o resultado na tela e endl para pular uma linha.

cout << "Caractere anterior: " << (char)(codigo - 1) << endl;
// mostra o código anterior

cout << "Caractere anterior: " << (char)(codigo + 1) << endl;
//mostra o próximo código

}