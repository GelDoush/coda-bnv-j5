#include <stdlib.h>
#include <stdio.h>
#include "operations.h"

int addition(int nombre1, int nombre2) {
	int resultat;
	resultat = add(nombre1,nombre2);
	printf("%d \n", resultat);
	return(0);
}
int substraction(int nombre1, int nombre2) {
	int resultat;
	resultat = sub(nombre1,nombre2);
	printf("%d \n", resultat);
	return(0);
}
int multiplication(int nombre1, int nombre2) {
	int resultat;
	resultat = mul(nombre1,nombre2);
	printf("%d \n", resultat);
	return(0);
}
int division(int nombre1, int nombre2) {
	int resultat;
	resultat = divide(nombre1,nombre2);
	printf("%d \n", resultat);
	return(0);
}
int modulo(int nombre1, int nombre2) {
	int resultat;
	resultat = mod(nombre1,nombre2);
	printf("%d \n", resultat);
	return(0);
}


int main(){
	char symbol;
	int nombre1;
	int nombre2;

	printf("Choose a symbol (+ | - | * | / | %%) : ");
	scanf(" %c",&symbol);
	
	printf("Please enter a number : ");
	scanf("%d", &nombre1);
	printf("Please enter a second number : ");
	scanf("%d", &nombre2);

	if (symbol == '+') {
		addition(nombre1,nombre2);
	}

	else if (symbol == '-') {
		substraction(nombre1,nombre2);
	}

	else if (symbol == '*') {
		multiplication(nombre1,nombre2);
	}

	else if (symbol == '/') {
		division(nombre1,nombre2);
	}

	else if (symbol == '%') {
		modulo(nombre1,nombre2);
	}

	else {
		printf("Error, symbol not detected\n");
	}

	return 0;
}
