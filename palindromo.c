#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool esPalindromo(int x){
    if (x < 0 || (x % 10 == 0 && x != 0)){
        return false;
    }

    int revertido = 0;
    while (x > revertido){
        revertido = revertido * 10 + x % 10;
        x /= 10;
    }

    return x == revertido || x == revertido / 10;
}

int main (){
    int numero = 8998;

    
    printf("%cEs %d un palindromo? %s\n", 168, numero, esPalindromo(numero) ? "verdadero" : "falso");

    return 0;
}

