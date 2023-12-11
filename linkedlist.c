#include<stdio.h>
#include <stdlib.h>

//Node
struct Node{
	int data;
	struct Node* next;
};

//Linked list
struct LinkedList{
	struct Node* head;
};

//function to initialize a linked list

void initializeList(struct LinkedList* list){
	list->head=NULL;
}

//function to insert an element at the end of the linked list

void insert(struct LinkedList* list, int data){
	struct Node* new = (struct Node*)malloc(sizeof(struct Node));

	new->data = data;
	new->next = NULL;

	if(list->head == NULL){
		list->head = new;
		printf("\n%d is inserted into list\n", data);
		return;
	}

	struct Node* curr = list->head;

	while(curr->next != NULL){
		curr = curr->next;
	}

	curr->next = new;

	printf("\n%d is inserted into list\n", data);
	return;
}

//function to remove an element of list

void delete(struct LinkedList* list){

	if(list->head == NULL){
		printf("\nList is empty\n");
		return;
	}

	if(list->head->next == NULL){
		printf("%d is deleted from the list.\n", list->head->data);
		free(list->head);
		list->head = NULL;
		return;
	}

	struct Node* curr = list->head;
	struct Node* prev;

	while(curr->next->next != NULL){
		curr = curr->next;
	}

	printf("%d is deleted from the list.\n", curr->next->data);

	free(curr->next);
	curr->next = NULL;
	return;

}

//function to print the elements of the list
void print(struct LinkedList* list){

	struct Node* curr = list->head;

	if(list->head == NULL){
		printf("\nThe list is empty\n");
		return;
	}

	printf("\nThe list is:\n");
	while(curr != NULL){
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}

int main(){

	struct LinkedList list;
	initializeList(&list);

	int ele, choice;

	do{
		printf("\nPRESS 1:\tINSERT\nPRESS 2:\tDELETE\nPRESS 3:\tDISPLAY\nPRESS 4:\tQUIT\n");
		printf("Enter your choice:\n");
		scanf("%d", &choice);

		switch(choice){
		case 1:
			printf("\nEnter a number to insert:\n");
			scanf("%d", &ele);
			insert(&list, ele);
			break;

		case 2:
			delete(&list);
			break;

		case 3:
			print(&list);
			break;

		case 4:
			break;

		default:
			printf("\nEnter a valid choice.\n");
		}
	}while(choice != 4);

	return 0;
}
