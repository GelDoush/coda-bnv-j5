#include <stdlib.h>
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int answer;
    int somme;
    while(1) {
        printf("Choose a number : ");
        scanf("%d",&answer);
        if (answer!=0) {
            somme = add(somme,answer);
            printf("Sum : %d \n", somme);
        }
        else {
            printf("End of the operations\n");
            return(0);
        }
    }
}