#include <stdlib.h> 
#include <stdio.h>
#include <stdbool.h>//c99�Q�ޤJ���зǨ禡�w
#define Max 10
//Array��@queue-------------------------------------- 
int queue[Max];
int front = 0;
int rear = 0;
void addq(int);
int deleteq();
int queueFull();
int queueempty();
//-------------------------------------- 
int main(void) 
{  

	system("pause");
	return 0;
}
void addq(int add)
{
	if(front==(rear+1)%Max)
	{
		queueFull();
	}
	else
	{	
		queue[rear]=add;
		rear=(rear+1)%Max;
	}
}
int deleteq()
{
	if(front==rear)
	{
		queueempty();//GCC���S��return����Ʒ|������^eax�H�s���̭����ȡC
	}
	else
	{
		front = (front+1)%Max;
		return queue[front];
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
int queueempty()
{
	if(front=rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
