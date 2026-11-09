#include <stdlib.h>
#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3) {
	double average = (nb1 + nb2 + nb3) / 3;
	return (average);
}

int main(void) {
	double result;
	result = compute_average(6,3,7);
	printf("%.2f \n",result);
}
