#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> cola;
    stack<int> pila;

    // llenamos la cola
    cola.push(1);
    cola.push(2);
    cola.push(3);

    cout << "Cola original:\n";
    while(!cola.empty()) {
        cout << cola.front() << endl;
        pila.push(cola.front()); // paso directo a la pila
        cola.pop();
    }

    cout << "\nCola invertida (usando pila):\n";
    while(!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }

    return 0;
}
