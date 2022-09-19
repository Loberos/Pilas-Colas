#pragma once
#include "CNodo.h"
using namespace std;

template <class T>
class Pilas
{
public:
	Pilas();
	~Pilas();
	void push(T valor);
	T pop();
	void peek();
	bool esVacia(); 
	void invertir(); 
	void eliminar(T posicion);
private:
	size_t cantidad; 
	Nodo<T>* tope; 
};
template <class T>
Pilas<T>::Pilas()
{
	tope = NULL; 
}
template <class T>
Pilas<T>::~Pilas()
{
}
template <class T>
void Pilas<T>::push(T valor) {
	if (esVacia()) {
		tope = new Nodo<T>(valor);
	}
	else
	{
		tope = new Nodo<T>(valor,tope); 
	}
}

template <class T>
T Pilas<T>::pop() {
	if (esVacia()) {
		return NULL;
	}
	else
	{
		Nodo<T>*aux = tope; 
		T elemento = (T)(tope->valor); 
		tope = (Nodo<T>*)tope->siguiente; 
		delete aux; 
		return elemento; 
	}
}

template <class T>
void Pilas<T>::eliminar(T posicion) {
	if (esVacia()) {
		return;
	}
	else {
		if (pos<0 && pos>cantidad)return;
		else if (pos == 0){
			pop(); 
		}
		else {
			Nodo<T>* aux = tope; 
			Nodo<T>* temp; 
			for (int i = 1; i < posicion; i++)
			{
				aux = aux->siguiente; 
			}
			temp = aux->siguiente;
			aux->siguiente = temp->siguiente;
			delete temp; 
			cantidad--; 
		}
	}
}
template <class T>
bool Pilas<T>::esVacia() {
	return (incio == NULL);
}
template <class T>
void Pilas<T>::invertir() {
	if (esVacia()) {
		return; 
	}else {
		Nodo<T>* aux = tope;
		Nodo<T>* previo = nullptr; 
		while (aux!=nullptr)
		{
			Nodo<T>* temp = aux->siguiente;
			aux->siguiente = previo; 
			previo = aux; 
			aux = temp; 
		}
		top = previo; 
	}
}