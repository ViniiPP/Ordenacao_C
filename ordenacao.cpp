#include <utility>

template <typename T>  // sempre acima da função
void selectionsort(T vet[], int n) {

  while (n > 1) {
    T maior = vet[0];   // T é tipo int.. float... é o template
    int pos = 0;

    for (int i = 1; i < n; i++) { // percore o vet todo e para no último (n-1)
      if (vet[i] > maior) {
        maior = vet[i];
        pos = i;
      }
    }

    std::swap(vet[n - 1], vet[pos]);  // trocar vet[n-1] com vet[pos]
    n--;
  }
}


template <typename T>
void bubblesort(T vet[], int n) {
  bool trocou;

  do {  // do while, verifica 1 vez pelo menos
    trocou = false;
    for (int i = 0; i < n - 1; i++) {
      if (vet[i] > vet[i + 1]) {       // compara se o valor "0" é maior q o segundo valor, e joga pra esquerda.
        std::swap(vet[i], vet[i + 1]); // troca de valores de forma fácil.
        trocou = true;
      }
    }
  } while (trocou);
}


template <typename T>
void insertionsort(T vet[], int n) {

  for (int i = 1; i < n; i++) { //compara coma direita 
    T aux = vet[i]; //chave
    int j = i - 1;
    while (j >= 0 && vet[j] > aux) {
      vet[j + 1] = vet[j];
      j--;  // j = -1
    }
    vet[j + 1] = aux;
  }
}


template <typename T>
int partition(T vet[], int start, int end) {
  int pivot = start;

  for (int i = start; i < end; i++) {
    if (vet[i] <= vet[end]) {
      std::swap(vet[pivot++], vet[i]);
    }
  }
  std::swap(vet[pivot], vet[end]);
  return pivot;
}


template <typename T>
void quicksort_rec(T vet[], int start, int end) {

  if (start >= end) return;
  int pivot = partition(vet, start, end);
  quicksort_rec(vet, start, pivot - 1);
  quicksort_rec(vet, pivot + 1, end);
}


template <typename T>
void quicksort(T vet[], int n) {
  quicksort_rec(vet, 0, n - 1);
}


void merge(int vet[], int start, int mid, int end, int aux[]) {
  int left = start;
  int right = mid;
  for (int i = start; i < end; ++i) {
    if ((left < mid) && ((right >= end) || (vet[left] < vet[right]))) {
      aux[i] = vet[left];
      ++left;
    } else {
      aux[i] = vet[right];
      ++right;
    }
  }

  for (int i = start; i < end; ++i) {
    vet[i] = aux[i];
  }
}

void rmergesort(int vetor[], int start, int end, int aux[]) {
  if ((end - start) < 2) return;

  int meio = ((start + end) / 2);
  rmergesort(vetor, start, meio, aux);
  rmergesort(vetor, meio, end, aux);
  merge(vetor, start, meio, end, aux);
}


template <typename T>
void mergesort(T vetor[], int n) {
  T aux[n];
  rmergesort(vetor, 0, n, aux);
}
