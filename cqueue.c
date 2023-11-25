#include<stdio.h>
#define max 100

int front = -1;
int rear = -1;
int queue[max];

void enqueue(int data);
int dequeue();
void print();

int main(){

	int choice, ele;

	while(choice != 4){

		printf("Press 1: \tEnqueue\n");
		printf("Press 2: \tDequeue\n");
		printf("Press 3: \tDisplay Queue\n");
		printf("Press 4: \tExit\n");
		printf("Enter a choice:\n");
		scanf("%d", &choice);

		switch(choice){

		case 1:
			printf("Enter an element to insert:\n");
			scanf("%d", &ele);
			enqueue(ele);
			break;

		case 2:
			dequeue();
			break;

		case 3:
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


void enqueue(int data){

	if((rear+1)%max == front){
		printf("Queue is full\n");
		return;
	}

	if(front == -1){
		front++;
		rear = (rear+1)%max;
		queue[rear] = data;
		printf("%d is inserted in the queue\n", data);
		return;
	}

	rear = (rear + 1) % max;
	queue[rear] = data; 
	printf("%d is inserted in the queue\n", data);
	return;
}


int dequeue(){

	int data;

	if(front == -1){
		printf("Queue is empty\n");
		return -1;
	}

	if(rear = max){
		data = queue[front];
		front = -1;
		rear = -1;
		printf("%d is deleted from the queue\n", data);
		return data;
	}

	data = queue[front];
	front++;
	printf("%d is deleted from the queue\n", data);
	return data;
}


void print(){

	if(front == -1){
		printf("Queue is empty\n");
		return;
	}

	if(rear >= front){
		printf("The queue is:\n");
		for(int i = front; i<=rear; i++){
			printf("%d ", queue[i]);
		}
		printf("\n");
		return;
	}

	printf("The queue is:\n");

	for(int i = front; i < max; i++){
		printf("%d ", queue[i]);
	}
	for(int i = 0; i <= rear; i++){
		printf("%d ", queue[i]);
	}

	printf("\n");
	return;
}
















