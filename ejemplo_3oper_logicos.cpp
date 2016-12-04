// ESTE ES UNS EJEMPLO DEL USO DE OPERADORES LOGICOS .
// lo primero es agregar las liberias a usar
#include <iostream>
using namespace std;
int main()
{ // dentro de nuestro bloque
    int a; 
    int c;
    cout << " ESCRIBE UNA NUMERO "<< endl;
    cin>> a;
    cout << " ESCRIBE UNA NUMERO "<< endl;
    cin>> c;
    
    if ( c >= a || a >=c ) // utilizamos el operador para indicar para comprar los numeros y saber cual es mayor.
    { 
  // si "c" es mayor a "a" nos mostrar 
         cout<< "numero mayor " << c;  
      }
       
   // sino  nos mostrara.
         else 
         {
              cout<< "numero mayor" <<a;
         }
    return 0;
}
