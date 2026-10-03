#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> P1;
    int numero;

    cout << "Digite numeros positivos (0 para parar):" << endl;

    cin >> numero;

    while (numero != 0) {

        if (numero > 0) {
            P1.push(numero);
        }

        cin >> numero;
    }

    cout << "Numeros pares:" << endl;

    while (!P1.empty()) {

        int valor = P1.top();
        P1.pop();

        if (valor % 2 == 0) {
            cout << valor << endl;
        }
    }

    return 0;
}
