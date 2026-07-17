#include <iostream>
using namespace std;

// Clase base abstracta
class Notificacion {
public:
    virtual void enviarMensaje() = 0;
};

// Notificación por correo
class Correo : public Notificacion {
public:
    void enviarMensaje() override {
        cout << "Mensaje enviado por Correo." << endl;
    }
};

// Notificación por SMS
class SMS : public Notificacion {
public:
    void enviarMensaje() override {
        cout << "Mensaje enviado por SMS." << endl;
    }
};

// Notificación por WhatsApp
class WhatsApp : public Notificacion {
public:
    void enviarMensaje() override {
        cout << "Mensaje enviado por WhatsApp." << endl;
    }
};

// Notificación por Telegram
class Telegram : public Notificacion {
public:
    void enviarMensaje() override {
        cout << "Mensaje enviado por Telegram." << endl;
    }
};

int main() {
    // arreglo de punteros a Notificacion
    Notificacion* lista[4];

    lista[0] = new Correo();
    lista[1] = new SMS();
    lista[2] = new WhatsApp();
    lista[3] = new Telegram();

    // recorrer todas las notificaciones
    for(int i = 0; i < 4; i++) {
        lista[i]->enviarMensaje();
        delete lista[i];
    }

    return 0;
}
