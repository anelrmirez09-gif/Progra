#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> pila;

    
    pila.push(1);
    pila.push(2);
    pila.push(3);

    cout << "Pila original\n";
    stack<int> copia = pila;
    while(!copia.empty()) {
        cout << copia.top() << endl;
        copia.pop();
    }

    
    vector<int> valores;
    while(!pila.empty()) {
        valores.push_back(pila.top());
        pila.pop();
    }

    
    for(int i = 0; i < valores.size(); i++) {
        pila.push(valores[i]);
    }

    cout << "Pila invertida\n";
    while(!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }

    return 0;
}
