#include <iostream>
using namespace std;

// Clase base abstracta
class Mascota {
public:
    virtual void sonido() = 0;
};

// Implementaciones concretas
class Perro : public Mascota {
public:
    void sonido() override {
        cout << "El perro hace: Guau Guau" << endl;
    }
};

class Gato : public Mascota {
public:
    void sonido() override {
        cout << "El gato hace: Miau" << endl;
    }
};

class Vaca : public Mascota {
public:
    void sonido() override {
        cout << "La vaca hace: Muu" << endl;
    }
};

class Loro : public Mascota {
public:
    void sonido() override {
        cout << "El loro dice: Hola!" << endl;
    }
};

int main() {
    // arreglo de punteros a Mascota
    Mascota* lista[4];

    lista[0] = new Perro();
    lista[1] = new Gato();
    lista[2] = new Vaca();
    lista[3] = new Loro();

    cout << "Sonidos de las mascotas:" << endl;
    for(int i = 0; i < 4; i++) {
        lista[i]->sonido();
        delete lista[i];
    }

    return 0;
}
