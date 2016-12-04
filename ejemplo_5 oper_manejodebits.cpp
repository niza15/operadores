// ESTE ES UN EJEMPLO DEL USO DE OPERADORES DE MANEJO DE BITS.
// MEDIANTE EL OPERADOR "&"
#include <iostream>
#define TAMANO 200
#define LIMITE 15
using namespace std;
int  main()
{
int i = 0;

for ( i = 0; i < TAMANO; i++ )
{
 cout<< (i & LIMITE);
}

return 0;
}
