#include "Algoritmos.h"
#include <iostream>
using namespace std;



int main() {


   Algoritmos *a = new Algoritmos ();
   
   a->insertar(10);
   a->insertar(6);
   a->insertar(15);
   a->insertar(2);
   a->insertar(13);
   a->insertar(20);
   a->insertar(1);
   a->insertar(4);
   a->insertar(11);
   a->insertar(18);
   a->insertar(21);
   
   //a->inOrden();
   //a->preOrden();
   //a->postOrden();
   cout << "cuantos : "<< a->cuantos()<< endl;
   cout << "suma : "<< a->sumar()<< endl;
   cout << "enlaces vacios : "<< a->enlacesVacios()<< endl;
   cout << "hojas : "<< a->numeroHojas()<< endl;
   cout << "menor : "<< a->menor()<< endl;
   cout << "mayor : "<< a->mayor()<< endl;












      
   delete a;
   return 0;
}
