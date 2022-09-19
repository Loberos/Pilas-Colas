#pragma once
#include <iostream>
template <class T>
class Nodo
{
public:
	Nodo(T _valor, Nodo<T>* _siguiente);
	~Nodo();
	T valor;
	Nodo<T>* siguiente;
private: 

};
template <class T>
Nodo<T>::Nodo(T _valor, Nodo<T>* _siguiente)
{
	valor = _valor;
	siguiente = _siguiente = NULL;
}
template <class T>
Nodo<T>::~Nodo()
{
}