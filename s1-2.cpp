// S1 porém o user escolhe quantos números

#include <iostream>
#include "ordenacao.cpp"

using namespace std;

int main() {
    int n;
    cin >> n;
    float va[n];
    
    cout << "Digite " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> va[i];
    }

    // Chame a função de ordenação desejada (bubblesort, selectionsort ou insertionsort)
    // bubbleSort(va, n);
    // selectionSort(va, n);
    insertionsort(va, n);

    cout << "Números ordenados:" << endl;
    for (int i = 0; i < n; i++) {
        cout << va[i] << " | ";
    }

    return 0;
}





