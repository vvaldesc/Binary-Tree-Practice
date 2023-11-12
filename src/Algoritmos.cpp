

#include "Algoritmos.h"

Algoritmos::Algoritmos() {
	abb = new BSTree<int>;

}

void Algoritmos::insertar(int dato) {
	abb->insert(dato);
}

void Algoritmos::inOrden (BSTree<int> *bst) {

   BSTree<int> *aux;

   if (! bst->empty()) {

      aux = bst->left();
      if (aux != nullptr) {
         inOrden(aux);
      }
      cout << bst->root() << " ";

      aux = bst->right();
      if (aux != nullptr) {
         inOrden(aux);
      }

   }
}
void Algoritmos::inOrden() {
	if (!abb->empty())
		inOrden(abb);
}
Algoritmos::~Algoritmos() {
	delete abb;
}

void Algoritmos::preOrden(BSTree<int> *bst) {

	   BSTree<int> *aux;

	   if (! bst->empty()) {

		  cout << bst->root() << " ";

	      aux = bst->left();
	      if (aux != nullptr) {
	         preOrden(aux);
	      }

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  preOrden(aux);
	      }

	   }
}

void Algoritmos::preOrden() {
	if (!abb->empty())
		preOrden(abb);
}

void Algoritmos::postOrden(BSTree<int> *bst) {

	   BSTree<int> *aux;

	   if (! bst->empty()) {



	      aux = bst->left();
	      if (aux != nullptr) {
	    	  postOrden(aux);
	      }

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  postOrden(aux);
	      }

		  cout << bst->root() << " ";


	   }
}

void Algoritmos::postOrden() {
	if (!abb->empty())
		postOrden(abb);
}

int Algoritmos::cuantos(BSTree<int> *bst) {
	   BSTree<int> *aux;
	  int i=0;

	   if (! bst->empty()) {
		   i++;

	      aux = bst->left();
	      if (aux != nullptr) {
	    	 i = i+cuantos(aux);
	      }

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  i =i+cuantos(aux);
	      }


	   }
	   return i;
}

int Algoritmos::sumar(BSTree<int> *bst) {
	   BSTree<int> *aux;
	  int i=0;

	   if (! bst->empty()) {
		  i=i + bst->root();

	      aux = bst->left();
	      if (aux != nullptr) {
	    	 i = i+sumar(aux);
	      }

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  i =i+sumar(aux);
	      }


	   }
	   return i;
}



int Algoritmos::sumar() {
	int cont=0;
	if (!abb->empty()){
		cont = sumar(abb);
	}
	return cont;
}


int Algoritmos::cuantos() {
	int cont=0;
	if (!abb->empty()){
		cont = cuantos(abb);
	}
	return cont;
}

int Algoritmos::enlacesVacios(BSTree<int> *bst) {
	   BSTree<int> *aux;
	  int i=0;

	   if (! bst->empty()) {

	      aux = bst->left();
	      if (aux != nullptr) {
	    	 i=i+enlacesVacios(aux);
	      }
	      else{
	    	  i++;
	      }

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  i=i+enlacesVacios(aux);
	      }
	      else{
	    	  i++;
	      }


	   }
	   return i;
}


int Algoritmos::enlacesVacios() {
	int cont=0;
	if (!abb->empty()){
		cont = enlacesVacios(abb);
	}
	return cont;
}

int Algoritmos::numeroHojas(BSTree<int> *bst) {
bool izq=false;
bool der=false;

	   BSTree<int> *aux;
	  int i=0;

	   if (! bst->empty()) {

	      aux = bst->left();
	      if (aux != nullptr) {
	    	 i=i+numeroHojas(aux);
	      }
	      else{
	    	  izq=true;
	      }

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  i=i+numeroHojas(aux);
	      }
	      else{
	    	  der=true;
	      }
	      if(der and izq){
	    	  i++;
	      }



	   }
	   return i;
}

int Algoritmos::menor(BSTree<int> *bst) {
	   BSTree<int> *aux;
	   int intmenor=0;

	   if (! bst->empty()) {

	      aux = bst->left();
	      if (aux != nullptr) {
	    	  intmenor=intmenor+ menor(aux);
	      }
	      else{
	    	  intmenor=bst->root();
	      }


	   }
	   return intmenor;
}

int Algoritmos::numeroHojas() {
	int cont=0;
	if (!abb->empty()){
		cont = numeroHojas(abb);
	}
	return cont;
}

int Algoritmos::mayor(BSTree<int> *bst) {
	   BSTree<int> *aux;
	   int intmayor=0;

	   if (! bst->empty()) {

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  intmayor=intmayor+ mayor(aux);
	      }
	      else{
	    	  intmayor=bst->root();
	      }


	   }
	   return intmayor;
}

int Algoritmos::menor() {
	int cont=0;
	if (!abb->empty()){
		cont = menor(abb);
	}
	return cont;
}

bool Algoritmos::existe(BSTree<int> *bst,int num) {
bool bandera=false;
	   BSTree<int> *aux;

	   if (! bst->empty()) {

		  cout << bst->root() << " ";

	      aux = bst->left();
	      if (aux != nullptr) {
	         preOrden(aux);
	      }

	      aux = bst->right();
	      if (aux != nullptr) {
	    	  preOrden(aux);
	      }

	   }
	   return bandera;
}

int Algoritmos::mayor() {
	int cont=0;
	if (!abb->empty()){
		cont = mayor(abb);
	}
	return cont;
}

int Algoritmos::existe(int num) {
	int cont=0;
	if (!abb->empty()){
		cont = existe(abb,num);
	}
	return cont;
}
