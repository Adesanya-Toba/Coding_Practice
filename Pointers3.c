/*
 * Pointers3.c
 *
 *  Created on: Sep 9, 2020
 *      Author: ADESANYA TOBA
 */
#include <stdio.h>

//Pointer to pointer
int main(void)
{

	int x = 5;
	int* p = &x;
	*p = 6;

	int** q = &p;
	int*** r = &q;

	printf("Address held by p, which is address of int x: %d\n", p);
	printf("Value held in address pointed by p: %d\n", *p);
	printf("Address of pointer p: %d\n", &p);
	printf("\n");

	printf("Address held by q: %d\n", q);
	printf("Value held in address pointed to by q: %d\n", *q);
	printf("Final value held in address pointed to %d\n", **q);
	printf("\n");

	printf("Address of pointer q itself: %d\n", &q);
	printf("Address held by r, which is the address of q: %d\n", r);
	printf("Address stored in the address held by q: %d\n", *r);
	printf("Address stored in that address: %d\n", **r);
	printf("Value stored in that address: %d\n", ***r);

	printf("\n");

	***r = 10;
	printf("x = %d\n", x);
	**q = *p + 2;
	printf("x = %d\n", x);

    int a = 7;
    int* head = &a;

    printf("%d\n", *head); // equivalent to *(&a) which is a!
}
