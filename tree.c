#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node *left, *right;
};

struct Node *create(){
	
	struct Node *temp;
	int x, choice;
	
	temp = (struct Node*)malloc(sizeof(struct Node*));
	
	printf("\nPress [0] for Enter new node and [1] for exit: ");
	scanf("%d", &choice);
	
	if(choice == 0){
		return 0;
		
	}else {
		
		printf("Enter The Data: ");
		scanf("%d", &x);
		temp -> data = x;
		
		printf("\nEnter the left child of %d", x);
		temp -> left = create();
		
		printf("\nEnter the right child of %d", x);
		temp -> right = create();
		
		return temp;
	}
}

void main(){
	
	struct Node *root;
	root = create();
}



