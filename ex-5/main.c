#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int exo1 (void) {
	print_str("Hello World");
	return(0);
}

int exo2 (void) {
	int resultat;
	resultat = add(5, 3);
	printf("%d \n",resultat);
}

int exo3 (void) {
	double result;
	result = compute_average(6,3,7);
	printf("%.2f \n",result);
}

int main(void) {
	exo1();
	exo2();
	exo3();
	return(0);
}
