#include <iostream>
using namespace std;
struct amdre {
    string nome;
    int idade;
    float nota;
};

int main () {
    amdre aluno1;
    aluno1.nome = "davisu";
    aluno1.idade = 666;
    aluno1.nota = 6.7;

    cout << "nome: " << aluno1.nome << endl;
    cout << "idade: " << aluno1.idade << endl;
    cout << "nota: " << aluno1.nota << endl;


return 0;
}