#include <stdlib.h>
#include <stdio.h>

int add (int nb1, int nb2) {
	int resultat = nb1+nb2;
	return(resultat);
}

int main(void) {
	int resultat;
	resultat = add(5, 3);
	printf("%d \n",resultat);
}
