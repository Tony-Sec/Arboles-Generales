#ifndef AGEN_EJERCICIOS_BASICOS_HPP
#define AGEN_EJERCICIOS_BASICOS_HPP


#include "../Agen.hpp"
#include <functional>
#include <cmath>

/****************************************************************************************Determinar si un nodo es hoja*/
template <typename T>
bool is_sheet(const Agen<T>& A,typename Agen<T>::nodo n){
    return ( A.hijoIzqdo(n)==Agen<T>::NODO_NULO )? true:false;
}

/********************************************************************************************Grado de un Árbol General*/
template <typename T>
int graderec(const Agen<T>& A,typename Agen<T>::nodo n) {
    int max_=0;
    if(n==Agen<T>::NODO_NULO)return 0;
    else{
         typename Agen<T>::nodo aux=A.hijoIzqdo(n);
         while(aux!=Agen<T>::NODO_NULO){
              ++max_;
              aux=A.hermDrcho(aux);
         }
    }
    return fmax(fmax(max_,graderec(A,A.hijoIzqdo(n))),fmax(max_,graderec(A,A.hermDrcho(n))));
}

template <typename T>
int grade(const Agen<T>& A) {
    if(A.arbolVacio())return 0;
    else return graderec(A,A.raiz());
}


#endif //AGEN_EJERCICIOS_BASICOS_HPP
