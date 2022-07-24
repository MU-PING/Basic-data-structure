#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>//c99被引入的標準函式庫 
//LinkList實作 Stack
typedef struct node { 
    int data; //資料 
    struct node *next;//下一個指標 
}Stack;

Stack* creates(void);    	// 建立堆疊 
Stack* push(Stack*, int); 	// 新增元素在頂端 
Stack* pop (Stack*);     	// 移除頂端元素 
int peek (Stack*);   		// 傳回頂端元素
bool isEmpty(Stack*);     	// 堆疊是否已空 
void list(Stack*);      	// 顯示所有內容 
//視為指標宣告 
int main(void) {  

	Stack* stack_1=creates();//建立一個stack
	stack_1=push(stack_1,1);
	stack_1=push(stack_1,2);
	stack_1=push(stack_1,3);
	stack_1=push(stack_1,4);
	list(stack_1);
	Stack* stack_2=creates();
	stack_2=push(stack_2,5);
	stack_2=push(stack_2,6);
	stack_2=push(stack_2,7);
	stack_2=push(stack_2,8);
	list(stack_2);
	system("pause");
    return 0; 
} 
Stack* creates(void){
	return NULL;
}
Stack* push(Stack* top, int new_data)//如果不回傳stack*必須將stack*宣告在全域變數 ，而且只能建立單一stack 
{
	Stack* pNew; 							//跟記憶體要一塊區域稱為pNew,這塊區域專門放指向stack型變數的指標（地址）
	pNew = (Stack*) malloc(sizeof(Stack));	//新的stack指標 ，並指向能存放1個stack的記憶體空間 
	if(pNew == NULL) { 
        printf("\n記憶體配置失敗！"); 
        exit(1); 
    }
	pNew->data = new_data; 
    pNew->next = top;				//(a->b 的含義是 (*a).b ) 
	top = pNew; 
	return top;
}
Stack* pop (Stack* top){//移除最上層元素，若stack為空回傳0 
	Stack* tmpnode;
	tmpnode=top;
	if(tmpnode == NULL) 
	{ 
        printf("\n堆疊已空！"); 
        return NULL; 
    } 
 	top=top->next;
	return top ;	
}
int peek (Stack* top){
	return top->data;
}    
bool isEmpty(Stack* top){
	return (top == NULL); 
}
void list(Stack* top){
	Stack* tmpnode; 
    tmpnode = top;
	printf("\n陣列元素:\n"); 
    while(tmpnode != NULL) { 
        printf("%3d\n", tmpnode->data); 
        tmpnode = tmpnode->next; 
	}
} 
 
