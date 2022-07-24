#include <stdlib.h> 
#include <stdio.h>
#include <stdbool.h>//c99被引入的標準函式庫
#include <string.h>
#define Max 100 
//Array實作 Stack 
//int 部分(計算答案所使用)-------------------------------------- 
int  int_stack[Max];	//存放運算元的stack 
int int_top=-1;
void int_push(int); 			// int新增元素 
int int_pop ();     		// int 移除
int int_peek ();			// int 回傳最上方元素 
bool int_stackFull(); 		// int stack是否滿 
bool int_stackEmpty();    	// int stack是否空
//char stack部分(中序轉後序、前序使用)--------------------------------------
char char_stack[Max];	//存放運算符的stack 
int char_top=-1;
void char_push(char); 			// char新增元素 
char char_pop ();     		// char 移除
char char_peek ();			// char 回傳最上方元素 
bool char_stackFull(); 		// char stack是否滿 
bool char_stackEmpty();    	// char stack是否空
//--------------------------------------

int main(void) 
{   
	system("pause");
	return 0;
}
//array實作 int stack-------------------------------------- 
void int_push(int new_data)
{
	if(int_top==Max-1)
	{
		int_stackFull();
	}
	int_stack[++int_top]=new_data;
}
int int_pop ()//移除最上層元素，若stack為空回傳0 
{
	if(int_top==-1)
	{
		int_stackEmpty();
	}
	return int_stack[int_top--]; 
}
int int_peek ()
{
	if(int_top==-1)
	{
		return int_stackEmpty();
	}
	return int_stack[int_top];
}    
bool int_stackFull()
{
	if (int_top==Max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool int_stackEmpty()
{
	if (int_top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//array實作 char stack-------------------------------------- 
void char_push(char new_data)
{
	if(char_top==Max-1)
	{
		char_stackFull();
	}
	char_stack[++char_top]=new_data;
}
char char_pop ()//移除最上層元素，若stack為空回傳0 
{
	if(char_top==-1)
	{
		char_stackEmpty();
	}
	return char_stack[char_top--]; 
}
char char_peek ()
{
	if(char_top==-1)
	{
		return char_stackEmpty();
	}
	return char_stack[char_top];
}    
bool char_stackFull()
{
	if (char_top==Max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool char_stackEmpty()
{
	if (char_top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
