#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    stack<int> pilha;
    string entrada;

    cout << "Digite os numeros e as operacoes (+ ou *): ";
    getline(cin, entrada);

    stringstream ss(entrada);
    string elemento;

    while (ss >> elemento) {

        if (elemento >= "0" && elemento <= "9") {
            pilha.push(stoi(elemento));
        }

        else if (elemento == "+" || elemento == "*") {

            if (pilha.size() < 2) {
                cout << "Erro: faltam valores para realizar a operacao." << endl;
                return 0;
            }

            int a = pilha.top();
            pilha.pop();

            int b = pilha.top();
            pilha.pop();

            if (elemento == "+") {
                pilha.push(b + a);
            }
            else {
                pilha.push(b * a);
            }
        }

        else {
            cout << "Operacao invalida." << endl;
            return 0;
        }
    }

    if (pilha.size() == 1) {
        cout << "Resultado: " << pilha.top() << endl;
    }
    else {
        cout << "Expressao invalida." << endl;
    }

    return 0;
}
