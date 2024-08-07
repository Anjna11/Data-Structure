#include<stdio.h>
#include<stdlib.h>

struct Node {
	
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *create(int item){
		
	struct Node *newnode;
	
	newnode = (struct Node*)malloc(sizeof(struct Node*));
	
	newnode -> data = item;
	newnode -> left = NULL;
	newnode -> right = NULL;
	
	return newnode;
} 

struct Node *insertion(struct Node *root, int item){

	if(root == NULL){
		return create(item);
		
	}
		
	if(item < root->data){	
		root -> left = insertion(root -> left, item);
		
	} else {
		root -> right = insertion(root -> right, item);
	}
	
	return root;	
}

struct Node *inorder(struct Node *root){
	
	if(root == NULL)
		return 0;
		
	inorder(root -> left);
	printf("%d  ", root -> data);
	inorder(root -> right);
}

struct Node *preorder(struct Node *root){
	
	if(root == NULL)
		return 0;
		
	printf("%d  ", root -> data);
	preorder(root -> left);
	preorder(root -> right);
		
}

struct Node *postorder(struct Node *root){
	
	if(root == NULL)
		return 0;
		
	postorder(root -> left);
	postorder(root -> right);
	printf("%d ", root -> data);
}

struct Node *search(struct Node *root, int item){
	
	if(root == NULL){
		
		printf("\n%d is not Present in the tree\n", item);
		return;
	}
	
	if(item == root -> data){
		
		printf("\n%d is Present in the tree\n", item);
	} else {
		
		if(item < root -> data)
			search(root -> left, item);
		
		else
			search(root -> right, item);
	}
}

void main(){
	
	struct Node *root = NULL;
	
	root = insertion(root, 45);
	root = insertion(root, 30);
	root = insertion(root, 50);
	root = insertion(root, 25);
	root = insertion(root, 35);
	root = insertion(root, 46);
	root = insertion(root, 60);
	root = insertion(root, 4);
	
	printf("Inorder Traversal...");
	inorder(root);
	
	printf("\n");
	
	printf("preorder Traversal...");
	preorder(root);
	
	printf("\n");
	
	printf("postorder Traversal...");
	postorder(root);
	
	search(root, 35);
}





















