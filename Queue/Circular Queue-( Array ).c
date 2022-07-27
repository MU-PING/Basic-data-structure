#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define Max 5

int queue[Max];
int front = 0;
int rear = 0;
void addq(int);
int deleteq();
int queueFull();
int queueempty();

int main(void)
{
    addq(5);
    addq(10);
    addq(16);
    addq(20);
    addq(3);

    deleteq();
    deleteq();
    deleteq();
    deleteq();
    deleteq();

	return 0;
}

void addq(int data)
{
	if(front==(rear+1)%Max)
	{
		queueFull();
		printf("Queue is full\n\n");
	}
	else
	{
		queue[rear] = data;
		rear = (rear+1)%Max;
		printf("Add %d to queue\n", data);
	}
}

int deleteq()
{
    int data;
	if(front==rear)
	{
		queueEmpty(); //GCC will directly return the value in the eax register for functions without return
		printf("Queue is empty\n\n");
	}
	else
	{
	    data = queue[front];
		front = (front+1)%Max;
		printf("Delete %d from queue\n", data);
		return data;
	}
}

int queueFull()
{
	if(front==(rear+1)%Max)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int queueEmpty()
{
	if(front==rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
