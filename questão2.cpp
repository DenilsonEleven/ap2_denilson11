#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int prioridade;
};

void bubbleSort(vector<Paciente>& pacientes) {
    int n = pacientes.size();
    bool trocou;

    for (int i = 0; i < n - 1; i++) {
        trocou = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (pacientes[j].prioridade > pacientes[j + 1].prioridade) {
                swap(pacientes[j], pacientes[j + 1]);
                trocou = true;
            }
        }
        if (!trocou) break;
    }
}

void imprimirLista(const vector<Paciente>& pacientes) {
    for (const auto& p : pacientes) {
        cout << p.nome << " - Prioridade " << p.prioridade << endl;
    }
}

int main() {
    vector<Paciente> pacientes = {{"Ana", 5}, {"Pedro", 2}, {"Carla", 4}, {"Lucas", 1},
                                  {"Mariana", 3}, {"Fernanda", 5}, {"Rafael", 2}, {"Beatriz", 4},
                                  {"Guilherme", 1}, {"Sofia", 3}};

    cout << "Lista antes da ordenação (Bubble Sort):\n";
    imprimirLista(pacientes);

    bubbleSort(pacientes);

    cout << "\nLista ordenada por prioridade:\n";
    imprimirLista(pacientes);

    return 0;
}
// Selection sort 


#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int prioridade;
};

void selectionSort(vector<Paciente>& pacientes) {
    int n = pacientes.size();

    for (int i = 0; i < n - 1; i++) {
        int menorIndice = i;
        for (int j = i + 1; j < n; j++) {
            if (pacientes[j].prioridade < pacientes[menorIndice].prioridade) {
                menorIndice = j;
            }
        }
        swap(pacientes[i], pacientes[menorIndice]);
    }
}

void imprimirLista(const vector<Paciente>& pacientes) {
    for (const auto& p : pacientes) {
        cout << p.nome << " - Prioridade " << p.prioridade << endl;
    }
}

int main() {
    vector<Paciente> pacientes = {{"Ana", 5}, {"Pedro", 2}, {"Carla", 4}, {"Lucas", 1},
                                  {"Mariana", 3}, {"Fernanda", 5}, {"Rafael", 2}, {"Beatriz", 4},
                                  {"Guilherme", 1}, {"Sofia", 3}};

    cout << "Lista antes da ordenação (Selection Sort):\n";
    imprimirLista(pacientes);

    selectionSort(pacientes);

    cout << "\nLista ordenada por prioridade:\n";
    imprimirLista(pacientes);

    return 0;
}