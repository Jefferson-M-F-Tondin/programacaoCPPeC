#include <iostream>
using namespace std;

int main() {
    float A, B, C;
     
    
    cout << "Digite a medida do lado A: ";
    cin >> A;
    cout << "Digite a medida do lado B: ";
    cin >> B;
    cout << "Digite a medida do lado C: ";
    cin >> C;

    if (A + B > C && A + C > B && B + C > A) {
    
        cout << ("As medidas formam um triângulo válido.\n");
    
    if ( A == B && B == C){ 
        cout << ("Seu triângulo é Equilátero!");  
    }
     else if (A == B || B == C || A == C){
        cout << ("Seu triângulo é Isóceles!");
        }
    else if (A != B && B != C && A != C){
        cout << ("Seu triângulo é Escaleno!");
        }
    }
    else {
        cout << ("Não é possível formar um triângulo.\n");
    } 

    return 0;
}