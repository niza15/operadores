// ESTE ES UNS EJEMPLO DEL USO DE OPERADORES ARITMETICOS Y DE ASIGNACION.
// lo primero es agregar las liberias a usar
#include <iostream>
using namespace std;
int main()
{ // dentro de nuestro bloque
    //  usamos el operador ( = )para inicializar la varables
	   float cal1=0, cal2=0, cal3=0;
	   float promedio=0;

	   // En esta parte se utiliza un ciclo, es nos permite repetir el mensaje: escribe una calificacion. mientras que se cumpla la condicion.

	   while (cal1 >= -1|| cal2 >= -1 || cal3 >=-1) // dentro de los parentesis, es decir la condicion: escribimos la variable y con el operador (>= ) asignamos el valor al que "cal1" sera mayor, lo mismo ocurre con "cal2" y "cal3".
	   {
	   	 	cout<< "Escribe una calificacion" << endl;
	   	 	cin>> cal1;
	   	 	cout<< "Escribe una calificacion" << endl;
	   	 	cin>> cal2;
	   	 	cout<< "Escribe una calificacion" << endl;
	   	 	cin>> cal3;
	   	 	promedio= (cal1+cal2+cal3) / 3 ; // al final, usamos  operadores artimeticos de suma y divicion para darle el valor a "promedio" mediante (=).
	   	 	cout<< " Promedio es igual: " << promedio << endl;
	   }
	    return 0;
}
