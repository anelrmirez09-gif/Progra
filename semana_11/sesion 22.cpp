#include <iostream>
using namespace std;

class Animal {
public:
    virtual void hablar() {
        cout << "Soy un animal" << endl;
    }
};

class Perro : public Animal {
public:
    void hablar() override {
        cout << "Guau guau" << endl;
    }
};

class Gato : public Animal {
public:
    void hablar() override {
        cout << "Miau miau" << endl;
    }
};

int main() {
    // arreglo de punteros a Animal
    Animal* lista[2];

    // cada puntero apunta a un objeto distinto
    lista[0] = new Perro();
    lista[1] = new Gato();

    // polimorfismo: cada uno habla según su clase real
    for(int i = 0; i < 2; i++) {
        lista[i]->hablar();
        delete lista[i];
    }

    return 0;
}
