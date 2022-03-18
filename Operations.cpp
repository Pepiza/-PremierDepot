#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int Division(int a , int b)
{
	
	int resultat;
	
	resultat = a/b;
	
	return resultat;
}

int Multiplication(int a , int b)
{
	
	int resultat;
	
	resultat = a * b;
	
	return resultat;
}

int factoriel(int nb)
{
	int resultat = 1; 
	while (n > 1)
	resultat *= n--;
	
	return resultat;
}


int exposant(int nb,int exp)
{
	int resultat = 1;
	
	for(int i = 0; i < exp; ++i)
	{
   	 resultat *= nb;
	}
}
