#pragma once
#include "CNodo.h"

template <class T>
class Cola
{
public:
	Cola();
	~Cola();
	void enqueue(T valor); 
	T dequeue(); 
	bool esVacia(); 
	void invertir(); 
private:
	Nodo<T>* inicio;
	Nodo<T>* fin;
};

template <class T>
Cola<T>::Cola()
{
	this->inicio = NULL; 
	this->fin = NULL; 
	
}
template <class T>
Cola<T>::~Cola()
{
}
template <class T>
void Cola<T>::enqueue(T valor) {
	Nodo<T>* nodo = new Nodo<T>(valor); 
	if (esVacia()) {
		inicio = nodo; 
		fin = incio; 
	}
	else
	{
		fin->siguiente = nodo; 
		fin = nodo; 
	}
	nodo = NULL; 
}

template <class T>
T Cola<T>::dequeue() {

	if (!esVacia()) {
		T dato = inicio->valor;
		if (incio = fin) {
			delete incio; 
			delete fin; 
			incio = NULL;
			fin = NULL;
		}
		else
		{
			Nodo<T>* aux = incio; 
			incio = inicio->siguiente;
			delete aux; 
		}
		return dato
	}
	else
	{
		return NULL;
	}
}

template <class T>
bool Cola<T>::esVacia() {
	return (incio == NULL); 
}
template <class T>
void Cola<T>::invertir() {
	if (esVacia()) {
		return;
	}
	else {
		Nodo<T>* aux = incio; 
		Nodo<T>* aux2 = fin; 
		Nodo<T>* previo = nullptr; 
		while (aux!=nullptr)
		{
			Nodo<T>* temp = aux->siguiente;
			aux->siguiente = previo; 
			previo = aux; 
			if (aux->siguiente==nullptr) {
				aux2 = aux; 
				aux = temp; 
			}
			incio = previo; 
			fin = aux2;
		}
	}
}