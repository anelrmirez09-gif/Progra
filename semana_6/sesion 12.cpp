#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<string> cola1, cola2;
    stack<string> historial;

    // llenar colas con los nombres pedidos
    cola1.push("Ana");
    cola1.push("Angel");
    cola1.push("Genaro");

    cola2.push("Maria");
    cola2.push("Jose");
    cola2.push("Lucia");

    cout << "COLA 1 inicial:\n";
    queue<string> aux1 = cola1;
    while(!aux1.empty()) {
        cout << aux1.front() << endl;
        aux1.pop();
    }

    cout << "\nCOLA 2 inicial:\n";
    queue<string> aux2 = cola2;
    while(!aux2.empty()) {
        cout << aux2.front() << endl;
        aux2.pop();
    }

    cout << "\nINICIO DE ATENCION\n";

    // atender alternando entre cola1 y cola2
    while(!cola1.empty() || !cola2.empty()) {
        if(!cola1.empty()) {
            cout << "Atendido: " << cola1.front() << endl;
            historial.push(cola1.front());
            cola1.pop();
        }
        if(!cola2.empty()) {
            cout << "Atendido: " << cola2.front() << endl;
            historial.push(cola2.front());
            cola2.pop();
        }
    }

    cout << "\nHISTORIAL (ultimos primero):\n";
    while(!historial.empty()) {
        cout << historial.top() << endl;
        historial.pop();
    }

    return 0;
}
