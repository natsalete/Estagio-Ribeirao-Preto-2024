#include <iostream>

using namespace std;

/*Observe o trecho de código abaixo:
int INDICE = 12, SOMA = 0, K = 1;

enquanto K < INDICE faça
{

K = K + 1;

SOMA = SOMA + K;

}
imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?*/

int main(){
    int INDICE = 12, SOMA = 0, K = 1;

    while(K < INDICE){
        K++;
        SOMA += K;
    }

    cout << "O valor da variavel SOMA = " << SOMA << endl;
    return 0;
}

