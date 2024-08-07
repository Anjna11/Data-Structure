#include<stdio.h>
#include<stdlib.h>

void beginsert();
void display();
void begin_delete();
void lastinsert();
void lastdelete();

struct Node {

	int data;
	struct Node *next;
};

struct Node *head = NULL;

void main(){

	int n;
	do{
		printf("\nMain Manu:");
		printf("\n\t1.begin sert\n\t2.begin delete\n\t3.Display\n\t4.Last insert\n\t5.last delete\n\t6.Exit");
		printf("\nEnter Your Choice:");
		scanf("%d", &n);
		
		switch(n){		
			case 1:
				beginsert();
				break;
		
			case 2:
				begin_delete();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				lastinsert();
				break;
			
			case 5:
				lastdelete();
				break;
			
		}	
			
	}while(n != 6);
}	

void beginsert() {
	
	struct Node *new_node;
	int item;
	
	new_node = (struct Node *)malloc(sizeof(struct Node *));
	
	printf("Enter Element: ");
	scanf("%d", &item);
	
	new_node -> data = item;
	new_node -> next = head;
	head = new_node;
	printf("\nNode inserted");  
}

void display(){
	
	struct Node *ptr;
	
	ptr = head;
	if(ptr == NULL){
		
		printf("\nNothing To Print...");
	} else {
		
		printf("\nPrinting Values: ");
		
		while(ptr != NULL){
			
			printf("%d ", ptr -> data);
			ptr = ptr -> next; 
		}
	}
	
}

void begin_delete(){

	struct Node *ptr;
	
	if(head == NULL){
		
		printf("Link List Is Empty...");
	}else {
		
		ptr = head;
		head = ptr -> next;
		free(ptr);
		
		printf("\nNode deleted from the begining ...");  
	}
}

void lastinsert() {

	struct Node *new_node, *ptr;
	int n;
	
	printf("Enter Element: ");
	scanf("%d", &n);
	
	new_node = (struct Node *)malloc(sizeof(struct Node *));
	
	new_node -> data = n;
	new_node -> next = NULL;
	
	if(head == NULL) {
		
		head = new_node;
		
	} else {
		ptr = head;
		
		while(ptr -> next != NULL){
			
			ptr = ptr -> next;
		}
		
		ptr -> next = new_node; 
		
	} 
	
	printf("\nNode inserted");  
}

void lastdelete(){
		
	if(head == NULL){
		
		printf("Link List Is Empty...");
	
	}else {
		
		struct Node *ptr, *preptr;
		
		ptr = head;
		while(ptr -> next != NULL){
			
			preptr = ptr;
			ptr = ptr -> next; 
		}	
		preptr -> next = NULL;
		free(ptr);
		
		printf("\nNode deleted from the Last...");
	}
}

