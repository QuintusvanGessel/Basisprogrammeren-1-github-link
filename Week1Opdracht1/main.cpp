//make sure standardIO library is included
#include <stdio.h>

// the function main begins the actual program

int main(void) {
	
	int a;
	int b;
	int c;

	a = 10;

	printf("Voer een heel getal in");
	scanf_s("%d", &b);

	c = a * b;
	if ( b > 100) {
		
		printf("Das groot! \n");
	}
	
	printf("Het eerste programma werkt! %d %d \n", a, b);
	printf("a keer b is: %d", c);


	return 0;
}
