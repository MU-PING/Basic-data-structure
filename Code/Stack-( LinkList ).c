#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>//c99�Q�ޤJ���зǨ禡�w 
//LinkList��@ Stack
typedef struct node { 
    int data; //��� 
    struct node *next;//�U�@�ӫ��� 
}Stack;

Stack* creates(void);    	// �إ߰��| 
Stack* push(Stack*, int); 	// �s�W�����b���� 
Stack* pop (Stack*);     	// �������ݤ��� 
int peek (Stack*);   		// �Ǧ^���ݤ���
bool isEmpty(Stack*);     	// ���|�O�_�w�� 
void list(Stack*);      	// ��ܩҦ����e 
//�������Ыŧi 
int main(void) {  

	Stack* stack_1=creates();//�إߤ@��stack
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
Stack* push(Stack* top, int new_data)//�p�G���^��stack*�����Nstack*�ŧi�b�����ܼ� �A�ӥB�u��إ߳�@stack 
{
	Stack* pNew; 							//��O����n�@���ϰ�٬�pNew,�o���ϰ�M������Vstack���ܼƪ����С]�a�}�^
	pNew = (Stack*) malloc(sizeof(Stack));	//�s��stack���� �A�ë��V��s��1��stack���O����Ŷ� 
	if(pNew == NULL) { 
        printf("\n�O����t�m���ѡI"); 
        exit(1); 
    }
	pNew->data = new_data; 
    pNew->next = top;				//(a->b ���t�q�O (*a).b ) 
	top = pNew; 
	return top;
}
Stack* pop (Stack* top){//�����̤W�h�����A�Ystack���Ŧ^��0 
	Stack* tmpnode;
	tmpnode=top;
	if(tmpnode == NULL) 
	{ 
        printf("\n���|�w�šI"); 
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
	printf("\n�}�C����:\n"); 
    while(tmpnode != NULL) { 
        printf("%3d\n", tmpnode->data); 
        tmpnode = tmpnode->next; 
	}
} 
 
