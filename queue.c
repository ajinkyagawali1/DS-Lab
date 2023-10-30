#include<stdio.h>
#include<stdbool.h>

int queue[100];
int front = -1;
int rear = -1;

bool isEmpty(){
	if(front == -1){
		return true;
	}

	if(front > rear){
		front = -1;
		rear = -1;
		return true;
	}
	return false;
}
void enqueue(int data){
	if(rear == 100){
		printf("\nQueue is Full\n");
		return;
	}
	if(front == -1 && rear == -1){
		front++;
		rear++;

		queue[rear] = data;
		return;
	}
	else{
		rear++;
		queue[rear] = data;
		return;
	}
	return;
}

int deque(){
	if(isEmpty()){
		printf("\nQueue is Empty\n");
		return -1;
	}
	int data = queue[front];
	front++;
	return data;
}

void print(){
	if(isEmpty()){
		printf("\nQueue is Empty\n");
		return;
	}

	for (int i = front; i <= rear; i++)
	{
		printf("%d ",queue[i]);
	}

	printf("\n");

	return;
}

int main(){

	int choice;

	while(choice != 4){
		printf("1. Enqueue\n2. Deque\n3. Display\n4. Quit\n");
		printf("Enter your choice\n");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				int data;
				printf("Enter a number: ");
				scanf("%d", &data);
				enqueue(data);
				printf("%d is inserted in the queue\n", data);
				break;

			case 2:
				if(!isEmpty()){
				printf("%d is deleted from the queue", deque());
				}
				else{
					deque();
				}
				break;

			case 3:
				if(!isEmpty()){
				printf("These are the elements of the queue:\n");
				}
				print();
				break;

			case 4:
				break;

			default:
				printf("Enter a valid choice\n");
		}
	}
	return 0;
}