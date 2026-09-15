#include <iostream>
using namespace std;

struct Livro {
    string nome;
    string autor;
    int ano;
}

int main () {
  Livro1.nome = "Marvels History";
  Livro1.autor = " Martin Goodman";
  Livro1.ano = 1939;

  cout << "Nome: " << Livro1.nome << endl;
  cout << "Autor: " << Livro1.autor << endl;
  cout << "Ano: " << Livro1.ano << endl;
}