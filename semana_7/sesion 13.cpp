#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int b = 30;

    int* punteroa = &a;
    int* punterob = &b;

    cout << "antes:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // intercambio manual con variable temporal
    int temp = *punteroa;   // guardo el valor de a
    *punteroa = *punterob;  // copio el valor de b en a
    *punterob = temp;       // copio el valor original de a en b

    cout << "despues:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
