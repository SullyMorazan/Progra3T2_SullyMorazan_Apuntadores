#include "Evaluador.cpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr; // Desreferencia la variable apuntador *ptr para obtener el valor
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return  *a + *b; //Se desreferencia las variables apuntador a y b para sacar los valores que contienen y se suman
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
	if(a==b) //Se comparan las direcciones de las variables apuntador en la memoria al no usar desreferencia    
    return true; //Devuelve true si apuntan a la misma direcci�n
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
	if(*a==*b)//Se comparan las dos variables desreferenciadas 
    return true; //devuelve true si contienen los mismos valores
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    char prim_letr = a->at(0); //funci�n at() para obtener un caracter en la posici�n indicada en este caso en la posici�n 0
    return prim_letr;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
	string *alreves = new string(""); //Creo una variable apuntador para almacenar la cadena del apuntador string al rev�s
	for(int c = a->length()-1; c>= 0; c--) // el contador empezar� a contar desde la �ltima posici�n usando la funci�n length para extraer el tama�o de la cadena
{                                         //y se resta 1 para que coincida con el n�mero de cada elemento, termina el ciclo hasta que c es >=0 y se decrementa
  alreves+= a->at(c);                     // es un for en descenso para que vaya almacenando la �ltima letra de la cadena en la nueva variable
}                                         //utilizamos la funci�n at() para que se vaya posicionando en el elemento que indica el contador
  
    if(alreves==a) //Comparamos la cadena que se almacen� al rev�s con la cadena original
    return true; //Devuelve true si la condici�n es verdadera
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
	int pot=1; //inicializamos una variable entera con 1 para que no se haga cero a la hora de multiplicar por la base
	for(int i=0; i<*exponente;i++)	//el contador empieza desde cero hasta el valor del exponente para multiplicar la base, las veces que indica el exponente 
	{
	pot=pot*(*base); // se va almacenando lo que hay en la misma variable pot con el resultado de su multiplicaci�n por la base  
}
	return pot; //Devuelve el resultado final de la potencia
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
