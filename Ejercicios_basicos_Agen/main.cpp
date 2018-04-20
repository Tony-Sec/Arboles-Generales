#include <iostream>
#include "../I-O_Agen/I_O_Agen.hpp"
#include "Ejercicios_basicos_Agen.hpp"

using namespace std;

typedef char T_elem;
T_elem fin='#';

int main() {

    Agen<T_elem> A;

    /***********************************************Leer Arbol General en agen.dat***************************************/
    cout <<"agen.dat --> Extraer Agen"<<endl;
    ifstream f_input("..//..//I-O_Agen//agen.dat");
    rellenarAgen(f_input,A);
    f_input.close();

    cout <<"Caracteristicas del Arbol Binario A************************************:\n"<<endl;
    imprimirAgen(A);
    cout<<"\n\n";
    T_elem elem =A.elemento(A.hijoIzqdo(A.hermDrcho(A.hijoIzqdo(A.raiz()))));
    cout<<"El elemento "<<elem<<" es hijo?"<<is_sheet(A,A.hijoIzqdo(A.hermDrcho(A.hijoIzqdo(A.raiz())))) <<endl;
    cout<<"El grado del Arbol General es: "<<grade(A)<<endl;

    return 0;
}
