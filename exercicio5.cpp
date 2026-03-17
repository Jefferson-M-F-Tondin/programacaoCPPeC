// ============================================================
//  EXERCÍCIO 5 — float vs double: qual a diferença?
//  Semana 03 | Tipos de dado: float e double
// ============================================================
//
//  TANTO float QUANTO double GUARDAM NÚMEROS COM VÍRGULA.
//  ENTÃO QUAL É A DIFERENÇA?
//
//  A diferença está na PRECISÃO (quantas casas decimais
//  o tipo consegue representar corretamente):
//
//    float   -> ocupa 4 bytes -> ~6 casas decimais precisas
//    double  -> ocupa 8 bytes -> ~15 casas decimais precisas
//
//  Exemplo com o número 1 dividido por 3:
//    O resultado real é: 0.333333333333333...
//
//    float  armazena: 0.333333  (para após ~6 casas)
//    double armazena: 0.333333333333333  (muito mais preciso)
//
//  QUANDO USAR CADA UM?
//    float  -> quando a precisão não é crítica e a memória
//              é limitada (ex: jogos, gráficos)
//    double -> quando a precisão é importante
//              (ex: cálculos científicos, financeiros)
//
//  O slide da aula destaca: float ≠ double
//
// ------------------------------------------------------------
//  ENUNCIADO:
//  Crie um programa que demonstre a diferença de precisão
//  entre float e double.
//
//  1) Declare a variável  resultado_float  do tipo float
//     e a variável  resultado_double  do tipo double.
//
//  2) Atribua a AMBAS o resultado de 1.0 dividido por 3.0.
//
//  3) Exiba cada resultado com 2, 6 e 10 casas decimais,
//     usando setprecision().
//     Observe onde os valores começam a divergir.
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA:
//
//  === Comparando float e double ===
//
//  Com 2 casas decimais:
//    float:  0.33
//    double: 0.33
//
//  Com 6 casas decimais:
//    float:  0.333333
//    double: 0.333333
//
//  Com 10 casas decimais:
//    float:  0.3333333433
//    double: 0.3333333333
//
//  Conclusao: a partir de ~7 casas, float perde precisao!
//
// ============================================================
//  DESENVOLVA NO CÓDIGO ABAIXO:
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    

    return 0;
}