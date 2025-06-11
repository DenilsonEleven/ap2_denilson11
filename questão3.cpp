#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para gerar um vetor de números aleatórios
vector<int> gerarVetorAleatorio(int tamanho, int min, int max) {
    vector<int> vetor;
    srand(time(0));  // Inicializar a semente
    for (int i = 0; i < tamanho; i++) {
        vetor.push_back(rand() % (max - min + 1) + min);
    }
    return vetor;
}

// Função para ordenar o vetor usando Insertion Sort
void insertionSort(vector<int>& vetor) {
    int n = vetor.size();
    for (int i = 1; i < n; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

// Função para imprimir o vetor
void imprimirVetor(const vector<int>& vetor) {
    for (int num : vetor) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Gerando vetor com 50 números aleatórios entre 1 e 500
    vector<int> vetor = gerarVetorAleatorio(50, 1, 500);

    cout << "Vetor antes da ordenação:\n";
    imprimirVetor(vetor);

    // Ordenando o vetor usando Insertion Sort
    insertionSort(vetor);

    cout << "\nVetor ordenado:\n";
    imprimirVetor(vetor);

    return 0;
}