#include <iostream>
#include <vector>
#include <string>

using namespace std;

int buscaBinaria(const vector<string>& lista, const string& titulo) {
    int esquerda = 0, direita = lista.size() - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        
        if (lista[meio] == titulo) {
            return meio;
        } else if (lista[meio] < titulo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1;  // Retorna -1 se o livro não for encontrado
}

int main() {
    vector<string> livros = {
        "1984", "A Culpa é das Estrelas", "A Droga da Obediência", "A Estrada", "A Fera de Gaia",
        "A Hora da Estrela", "A Menina que Roubava Livros", "A Metamorfose", "A Montanha Mágica",
        "A Revolução dos Bichos", "A Sombra do Vento", "A Teia de Charlotte", "Admirável Mundo Novo",
        "Alice no País das Maravilhas", "Assassinato no Expresso do Oriente", "Cem Anos de Solidão",
        "Crepúsculo", "Corte de Espinhos e Rosas", "Dom Casmurro", "Duna", "Ensaio sobre a Cegueira",
        "Fahrenheit 451", "Frankenstein", "Harry Potter e a Pedra Filosofal", "Jogos Vorazes",
        "Memórias Póstumas de Brás Cubas", "O Alquimista", "O Código Da Vinci", "O Cortiço",
        "O Guia do Mochileiro das Galáxias", "O Hobbit", "O Iluminado", "O Ladrão de Raios",
        "O Pequeno Príncipe", "O Poder do Hábito", "O Retrato de Dorian Gray", "O Silmarillion",
        "O Senhor dos Anéis: A Sociedade do Anel", "O Sol é Para Todos", "Onde Vivem os Monstros",
        "Orgulho e Preconceito", "Percy Jackson e o Ladrão de Raios", "Sapiens: Uma Breve História da Humanidade",
        "Um Estudo em Vermelho", "Vidas Secas"
    };

    string tituloBuscado;
    cout << "Digite o título do livro que deseja buscar: ";
    getline(cin, tituloBuscado);

    int indice = buscaBinaria(livros, tituloBuscado);

    if (indice != -1) {
        cout << "O livro \"" << tituloBuscado << "\" foi encontrado na posição " << indice << "." << endl;
    } else {
        cout << "O livro \"" << tituloBuscado << "\" não foi encontrado na lista." << endl;
    }

    return 0;
}