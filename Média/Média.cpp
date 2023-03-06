#include <iostream>
using namespace std;

int main()
{
    string nome = "";
    double media = 0;
    double P1 = 0;
    double P2 = 0;

    cout << "======================\n";
    cout << "Insira o nome do aluno\n";
    cout << "======================\n";
    cin >> nome;
    cout << "======================\n";
    cout << "Insira a nota da P1\n";
    cout << "======================\n";
    cin >> P1;
    cout << "======================\n";
    cout << "Insira a nota da P2\n";
    cout << "======================\n";
    cin >> P2;
    
    media = (P1 + P2) / 2;

    if (media >= 6) {
        cout << "~~APROVADO~~\n";
        cout << "Sua media eh " << media << endl;
    }
    else {
        cout << "~~REPROVADO~~\n";
        cout << "Sua media eh " << media << endl;
    }
}
