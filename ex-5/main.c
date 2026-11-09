#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int exo1 (void) {
	print_str("Hello World");
	return(0);
}

int exo2 (void) {
	int resultat;
	resultat = add(4, 8);
	printf("%d \n",resultat);
	return(0);
}

int exo3 (void) {
	double result;
	result = compute_average(5,11,2);
	printf("%.2f \n",result);
	return(0);
}

int main(void) {
	exo1();
	exo2();
	exo3();
	return(0);
}
