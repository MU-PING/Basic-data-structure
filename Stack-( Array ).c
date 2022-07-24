#include <stdlib.h> 
#include <stdio.h>
#include <stdbool.h>//c99�Q�ޤJ���зǨ禡�w
#include <string.h>
#define Max 100 
//Array��@ Stack 
//int ����(�p�⵪�שҨϥ�)-------------------------------------- 
int  int_stack[Max];	//�s��B�⤸��stack 
int int_top=-1;
void int_push(int); 			// int�s�W���� 
int int_pop ();     		// int ����
int int_peek ();			// int �^�ǳ̤W�褸�� 
bool int_stackFull(); 		// int stack�O�_�� 
bool int_stackEmpty();    	// int stack�O�_��
//char stack����(�������ǡB�e�Ǩϥ�)--------------------------------------
char char_stack[Max];	//�s��B��Ū�stack 
int char_top=-1;
void char_push(char); 			// char�s�W���� 
char char_pop ();     		// char ����
char char_peek ();			// char �^�ǳ̤W�褸�� 
bool char_stackFull(); 		// char stack�O�_�� 
bool char_stackEmpty();    	// char stack�O�_��
//--------------------------------------

int main(void) 
{   
	system("pause");
	return 0;
}
//array��@ int stack-------------------------------------- 
void int_push(int new_data)
{
	if(int_top==Max-1)
	{
		int_stackFull();
	}
	int_stack[++int_top]=new_data;
}
int int_pop ()//�����̤W�h�����A�Ystack���Ŧ^��0 
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
//array��@ char stack-------------------------------------- 
void char_push(char new_data)
{
	if(char_top==Max-1)
	{
		char_stackFull();
	}
	char_stack[++char_top]=new_data;
}
char char_pop ()//�����̤W�h�����A�Ystack���Ŧ^��0 
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
