#include <iostream>
#include "I_O_Agen.hpp"

using namespace std;

typedef char T_elem;
const T_elem fin = '#';

int main ()
{
    Agen<T_elem> A, B;

    /*cout << "Introducir A_gen --> agen.dat" << endl;
    rellenarAgen(A, fin);       // Desde std::cin
    ofstream fs("agen.dat");    // Abrir fichero de salida.
    imprimirAgen(fs, A, fin);   // En fichero.
    fs.close();
    cout << "\n*** Árbol general guardado en fichero agen.dat ***\n";
*/
    cout <<"agen.dat --> Extraer A_gen"<<endl;
    ifstream fe("agen.dat");    // Abrir fichero de entrada.
    rellenarAgen(fe, B);        //Desde std::cout
    fe.close();


    cout << "\n*** Mostrar árbol B ***\n";
    imprimirAgen(B); // En std::cout

    return 0;
}