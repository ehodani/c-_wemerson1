#include <iostream>
using namespace std;
class Personagem {
public:
string nome;
int vida;
void receberDano(int dano) {
    vida = vida - dano;
    cout << nome << " sofreu " << dano << " de dano!" << endl;
}
};
int main (){
Personagem heroi;
heroi.nome= "Andre, o espinheiro maldito";
heroi.vida=200;

cout << heroi.nome << "comeca com " << heroi.vida << "de vida." << endl;

return 0;
}