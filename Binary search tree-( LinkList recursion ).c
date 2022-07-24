#include <stdlib.h> 
#include <stdio.h>
typedef struct Node { 
	int data;				//資料 
	struct Node *rootnode;	//父節點 
	struct Node *leftnode;	//左節點 
    struct Node *rightnode;	//右節點 
}TreeNode;

void Add_TreeNode(TreeNode**,TreeNode **,int);
void Preorder(TreeNode*);
void Inorder(TreeNode*);
void Postorder(TreeNode*);
TreeNode *Tree1_root = NULL;

int main(void) 
{  
	Add_TreeNode(&Tree1_root,&Tree1_root,10);
	Add_TreeNode(&Tree1_root,&Tree1_root,5);
	Add_TreeNode(&Tree1_root,&Tree1_root,6);
	Add_TreeNode(&Tree1_root,&Tree1_root,13);
	Add_TreeNode(&Tree1_root,&Tree1_root,4);
	Add_TreeNode(&Tree1_root,&Tree1_root,9);
	Add_TreeNode(&Tree1_root,&Tree1_root,7);
	Add_TreeNode(&Tree1_root,&Tree1_root,1);
	printf("Preorder: ");
	Preorder(Tree1_root);
	printf("\nInorder: ");
	Inorder(Tree1_root);
	printf("\nPostorder: ");
	Postorder(Tree1_root);
	return 0;
}

void Add_TreeNode(TreeNode **node,TreeNode **rootnode,int data)
{
	if(*node==NULL)
	{
		TreeNode *newnode;
		newnode=(TreeNode*) malloc(sizeof(TreeNode));
		newnode->data = data;
		newnode->rootnode = *rootnode;
		newnode->leftnode = NULL;
		newnode->rightnode = NULL;
		*node=newnode;
	} 
	else if((*node)->data>data)
	{
		Add_TreeNode(&((*node)->leftnode),node,data);
	}
	else if((*node)->data<=data)
	{
		Add_TreeNode(&((*node)->rightnode),node,data);
	}
}
void Preorder(TreeNode* node) 
{
	if(node!=NULL)
	{
		printf("%d ",node->data);
		Preorder(node->leftnode);
		Preorder(node->rightnode);
	}
}
void Inorder(TreeNode* node) 
{
	if(node!=NULL)
	{
		Inorder(node->leftnode);
		printf("%d ",node->data);
		Inorder(node->rightnode);
	}
}
void Postorder(TreeNode* node) 
{
	if(node!=NULL)
	{
		Postorder(node->leftnode);
		Postorder(node->rightnode);
		printf("%d ",node->data);
	}
}
