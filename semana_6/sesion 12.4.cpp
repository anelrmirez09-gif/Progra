#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> pila;
    queue<int> cola;

    // llenar pila
    pila.push(40);
    pila.push(50);
    pila.push(60);

    // llenar cola
    cola.push(4);
    cola.push(5);
    cola.push(6);

    cout << "Pila inicial:\n";
    stack<int> tempPila = pila;
    while(!tempPila.empty()) {
        cout << tempPila.top() << endl;
        tempPila.pop();
    }

    cout << "Cola inicial:\n";
    queue<int> tempCola = cola;
    while(!tempCola.empty()) {
        cout << tempCola.front() << endl;
        tempCola.pop();
    }

    // mover pila ? cola
    while(!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }

    // mover cola ? pila
    while(!cola.empty()) {
        pila.push(cola.front());
        cola.pop();
    }

    cout << "\nPila final:\n";
    while(!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }

    cout << "Cola final:\n";
    while(!cola.empty()) {
        cout << cola.front() << endl;
        cola.pop();
    }

    return 0;
}
