#include <stdio.h>
#define MAXSIZE 100

int stack[MAXSIZE];
int top = -1;

void push(int data){
	if(top == MAXSIZE-1){
		printf("\nSTACK OVERFLOW\n");
		return;
	}

	top++;
	stack[top] = data;
	return;
}

int pop(){
	if(top == -1){
		printf("\nSTACK UNDERFLOW\n");
		return -1;
	}

	int data = stack[top];
	top--;
	return data;
}

void print(){
	if(top == -1){
		printf("\nSTACK IS EMPTY\n");
		return;
	}

	printf("\nThe Stack is:\n");
	for (int i = 0; i <= top; ++i)
	{
		printf("%d ", stack[i]);
	}
}

int main(){

	int choice;
	int data;

	while(choice != 4){
		printf("\n\nChoose an operation:\n1. Push\n2. Pop\n3. Print\n4. Quit\n");
		scanf("%d", &choice);

		switch(choice){
		case 1:
			printf("\nEnter a number to insert: ");
			scanf("%d", &data);
			push(data);
			printf("\nElement %d is inserted in the stack.\n", data);
			break;

		case 2:
			data = pop();
			if(data == -1) break;
			printf("\nElement %d is deleted from the stack.\n", data);
			break;

		case 3:
			print();
			break;

		case 4:
			break;

		default:
			printf("\nEnter a valid choice:\n");	
		}
	}


	return 0;
}


