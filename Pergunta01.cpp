#include <iostream>

using namespace std;

/*Observe o trecho de código abaixo:
int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça
{

K = K + 1;

SOMA = SOMA + K;

}
imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?*/

int main(){
    int INDICE = 3, SOMA = 0, K = 0;

    while(K < INDICE){
        K++;
        SOMA += K;
    }

    cout << "O valor da variavel SOMA = " << SOMA << endl;
    return 0;
}

