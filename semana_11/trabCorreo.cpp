#include <iostream>
#include <string>
using namespace std;

// Clase base
class Notificacion {
protected:
    string mensaje;
    string destinatario;
public:
    Notificacion(string m, string d) : mensaje(m), destinatario(d) {}
    virtual void enviar() = 0; // metodo abstracto
    virtual void reenviar() {
        cout << "[REENVIAR] ";
        enviar();
    }
    virtual void enviarPrioritario() {
        cout << "[PRIORITARIO] ";
        enviar();
    }
};

// Canal: Correo
class Correo : public Notificacion {
public:
    Correo(string m, string d) : Notificacion(m, d) {}
    void enviar() override {
        cout << "Correo a " << destinatario << ": " << mensaje << endl;
    }
};

// Canal: SMS
class SMS : public Notificacion {
public:
    SMS(string m, string d) : Notificacion(m, d) {}
    void enviar() override {
        cout << "SMS a " << destinatario << ": " << mensaje << endl;
    }
};

// Canal: Token
class Token : public Notificacion {
public:
    Token(string m, string d) : Notificacion(m, d) {}
    void enviar() override {
        cout << "Token generado para " << destinatario << ": " << mensaje << endl;
    }
};

// Programa principal
int main() {
    Correo c("Hola Angel", "angel@mail.com");
    SMS s("Tu codigo es 1509", "999999999");
    Token t("Acceso seguro", "UsuarioX");

    // Enviar normal
    c.enviar();
    s.enviar();
    t.enviar();

    // Enviar prioritario
    c.enviarPrioritario();
    s.enviarPrioritario();

    // Reenviar
    t.reenviar();

    return 0;
}
