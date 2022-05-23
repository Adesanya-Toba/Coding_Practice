/* Inserting at the beginning of the List */
#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
	int data;
	struct Node* next; //C-style
}Node;


void Insert(Node** pointerHead, int x) //passing Node by refrence
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = x;
	temp->next = *pointerHead;
	*pointerHead = temp;
}

void Print(Node* head)
{
	// Node* temp = head; // copy the address of head here, so we don't modify the reference
	printf("List is: ");
	while (head!= NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main(void)
{
	Node* head; // head points to the Head node 

	head = NULL; // set to NULL for now i.e points nowhere now
	
    printf("Address of NULL: %d\n", head);
    printf("Address of pointer head itself: %d\n\n", &head);

	printf("How many numbers?\n");
	int n, x, d = 1;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter number (%d): \n", i == 0? d : ++d);
		scanf("%d", &x);
		Insert(&head, x);
		Print(head);
	}
	printf("Size of node: %ld\n", sizeof(Node));
    printf("Size of int: %ld\n", sizeof(int));
}