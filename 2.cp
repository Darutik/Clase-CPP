#include <iostream>
/*Llamamos a la biblioteca #include que nos permite la entrada y salida de datos por pantalla*/

using namespace std;
/*Indica al compilador que muestre el mensaje de presinar boton antes de cerrar*/

int main()
{
    char x; //Declara la variable x
    cout << "Escribe un caracter, puta...";
    cin >> x; //Lee la introduccion del teclado y lo graba en x
    cout << "Hola"; //Escribe Hola en pantalla
    cout << x; //Escribe lo que tenga guardado x en pantalla
    system("PAUSE"); //Detiene el programa antes de acabar
    return 0; //El programa no devuelve ningun valor
}
