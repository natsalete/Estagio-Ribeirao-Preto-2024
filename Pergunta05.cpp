#include <iostream>

using namespace std;

/*5) Escreva um programa que inverta os caracteres de um string.


IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
.*/

int main(){
    string texto;

    getline(cin,texto);

    for(int i = texto.size() - 1; i >= 0; i--){
         cout << texto[i];
    }
    
    cout << endl;
    
    return 0;
}




