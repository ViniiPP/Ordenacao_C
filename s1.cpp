#include <iostream>
#include "ordenacao.cpp"
using namespace std;

int main(){
    float va[5]{-20,10,3,20.5,15};  //usando template pode usar float.. negativo... tudo de uma vez
    //string va[5]{"a","b","c","d","e"};

    //bubblesort(va, 5);  //função
    //selectionsort(va, 5);
    insertionsort(va, 5);

    cout << "Vamos Ordernar" << endl;
        for(int i=0; i<5; i++){
            cout << va[i] << " | ";
        }

    return 0;
}


