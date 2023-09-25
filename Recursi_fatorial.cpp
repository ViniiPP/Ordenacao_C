#include <iostream>
using namespace std;

int calcularFatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * calcularFatorialRecursivo(n - 1);
}

int calcularFatorialNaoRecursivo(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero, fatorial;
   cout << "Digite um numero inteiro: ";
   cin >> numero;

    fatorial = calcularFatorialRecursivo(numero);
       cout << "O fatorial de " << numero << " eh " << fatorial <<endl;
    
    fatorial = calcularFatorialNaoRecursivo(numero);
       cout << "O fatorial de " << numero << " eh " << fatorial <<endl;
    
    return 0;
}


