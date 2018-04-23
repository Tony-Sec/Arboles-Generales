#include <iostream>
#include "../I-O_Agen/I_O_Agen.hpp"
#include "Ejercicios_basicos_Agen.hpp"

using namespace std;

typedef char T_elem;
T_elem fin='#';

int main() {

    Agen<T_elem> A,B;

    /*********************************************Leer Arbol General en agen.dat***************************************/
    ifstream f_input("..//..//I-O_Agen//agen.dat");
    rellenarAgen(f_input,A);
    f_input.close();

    cout <<"Caracteristicas del Arbol Binario A************************************:\n"<<endl;
    imprimirAgen(A);
    cout<<"\n\n";
    T_elem elem =A.elemento(A.hijoIzqdo(A.hermDrcho(A.hijoIzqdo(A.raiz()))));
    cout<<"El elemento "<<elem<<" es hijo?"<<is_sheet(A,A.hijoIzqdo(A.hermDrcho(A.hijoIzqdo(A.raiz())))) <<endl;
    cout<<"El grado del Arbol General es: "<<grade(A)<<endl;
    cout<<"La profundidad del nodo "<<elem<<" es :"<<deep(A,A.hijoIzqdo(A.hermDrcho(A.hijoIzqdo(A.raiz())))) <<endl;
    cout<<"El Desequilibrio del Arbol General es:  "<<disequilibrium(A) <<endl;


    /********************************************Leer Arbol General en agen2.dat***************************************/
    ifstream f_input2("..//..//I-O_Agen//agen2.dat");
    rellenarAgen(f_input2,B);
    f_input2.close();

    cout <<"\n\nCaracteristicas del Arbol Binario B************************************:\n"<<endl;
    imprimirAgen(B);
    cout<<"\n\n";
    cout<<"El Desequilibrio del Arbol General es:  "<<disequilibrium(B) <<endl;




    return 0;
}
