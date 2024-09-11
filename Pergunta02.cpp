#include <iostream>
#include <string>
using namespace std;

/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
*/

int main() {
    string texto;
    int contador = 0;

    // Solicita ao usuário que insira uma string
    cout << "Digite um texto: ";
    getline(cin, texto);

    // Percorre cada caractere da string
    for (char c : texto) {
        // Verifica se o caractere é 'a' ou 'A'
        if (c == 'a' || c == 'A') {
            contador++;
        }
    }

    // Verifica se a letra 'a' foi encontrada e exibe o resultado
    if (contador > 0) {
        cout << "A letra 'a' foi encontrada " << contador << " vez(es) no texto." << endl;
    } else {
        cout << "A letra 'a' nao foi encontrada no texto." << endl;
    }

    return 0;
}