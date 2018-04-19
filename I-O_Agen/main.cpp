#include <iostream>
#include "I_O_Agen.hpp"

using namespace std;

typedef char T_elem;
const T_elem fin = '#';

int main ()
{
    Agen<T_elem> A, B;
    
    /*************************************************Guardar Arbol Generalen agen.dat***************************************/
    cout << "Introducir Agen --> agen.dat" << endl;
    rellenarAgen(A, fin);       // Desde std::cin
    ofstream fs("agen.dat");    // Abrir fichero de salida.
    imprimirAgen(fs, A, fin);   // En fichero.
    fs.close();
    cout << "\n*** Árbol general guardado en fichero agen.dat ***\n";
    
    /*************************************************Leer Arbol Generalen agen.dat***************************************/
    cout <<"agen.dat --> Extraer Agen"<<endl;
    ifstream fe("agen.dat");     // Abrir fichero de entrada.
    rellenarAgen(fe, B);        
    fe.close();


    cout << "\n*** Mostrar árbol B ***\n";
    imprimirAgen(B);            // En std::cout

    return 0;
}
