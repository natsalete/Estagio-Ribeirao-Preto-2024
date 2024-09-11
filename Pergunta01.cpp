#include <iostream>

using namespace std;

/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número,
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return fib(n -1) + fib(n-2);
}

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n+n; i++){
         //cout << "fib(" << i << ") = " << fib(i) << endl;
         if (fib(i) == n){
            cout << "O numero informado pertence a sequencia." << endl;
            break;
         }else if(fib(i) > n){
             cout << "O numero informado nao pertence a sequencia." << endl;
             break;
         }
    }
    return 0;
}