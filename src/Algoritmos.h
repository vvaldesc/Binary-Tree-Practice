

#ifndef ALGORITMOS_H_
#define ALGORITMOS_H_
#include "bstree.h"

class Algoritmos {
	BSTree<int> *abb;
	void inOrden   (BSTree<int> *bst);
	void preOrden   (BSTree<int> *bst);
	void postOrden   (BSTree<int> *bst);
	int cuantos  (BSTree<int> *bst);
	int sumar  (BSTree<int> *bst);
	int enlacesVacios  (BSTree<int> *bst);
	int numeroHojas  (BSTree<int> *bst);
	int menor  (BSTree<int> *bst);
	int mayor  (BSTree<int> *bst);
	bool existe  (BSTree<int> *bst,int num);











public:
	Algoritmos();
	void insertar        (int dato);
	void inOrden  ();
	void preOrden  ();
	void postOrden  ();
	int cuantos  ();
	int sumar  ();
	int enlacesVacios  ();
	int numeroHojas  ();
	int menor  ();
	int mayor  ();
	int existe  (int num);











	~Algoritmos();
};

// inorden: Iz-Rai-De
// preorden: Raiz-Iz-De
// postorden: Iz-De-Raiz

#endif /* ALGORITMOS_H_ */
