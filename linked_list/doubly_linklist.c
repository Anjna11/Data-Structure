#include<stdio.h>
#include<stdlib.h>

void begin_insert();
void begin_delete();
void display();
void last_insert();
void last_delete();

struct node {
	
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = NULL;

int main(){
	
	int n; 
	
	do {
	printf("\nMain Manu:");
	printf("\n\t1.insertion at beginning\n\t2.Deletion at beginning\n\t3.Display\n\t4.1.insertion at last\n\t5.Deletion at last");
	printf("\n\tEnter Your Choice: ");
	scanf("%d", &n);
	
	switch(n){
		
		case 1:
			begin_insert();
			break;
			
		case 2:
			begin_delete();
			break;
			
		case 3:
			display();
			break;
			
		case 4:
			last_insert();
			break;
			
		case 5:
			last_delete();
			break;
	}
	
	}while(n != 6);	
}

void begin_insert(){
	
	struct node *new_node;
	int x;
	
	new_node = (struct node *)malloc(sizeof(struct node *));
	
	if(new_node == NULL){
		
		printf("List Is Overflow...");
		
	}else {
		
		printf("Enter Element: ");
		scanf("%d", &x);
		
		new_node -> data = x;	
		new_node -> prev = NULL;
		
		if(head == NULL){
		
			new_node -> next = NULL;
			head = new_node;
			
		}else {
			
			new_node -> next = head;
			head -> prev = new_node;
			head = new_node; 
		}
				
	}
}

void display(){
	
	struct node *ptr;
	
	ptr = head;
	if(ptr == NULL){
		
		printf("Linked List Is Empty...");
		
	}else {
	
		printf("\nPrinting Values: ");
		while(ptr != NULL){
				
			printf("%d ", ptr -> data);
			ptr = ptr -> next;	
		}	
	}	
	
}

void begin_delete(){
	
	struct node *ptr;
	
	if(head == NULL){
		
		printf("Linked List Is Empty...");
	
	}
	
	else if(head -> next == NULL){
	  
        head = NULL;   
        free(head);  
        printf("\nOne node deleted from the begining ...");  
   
	}else {
		
		ptr = head;
		head = ptr -> next;
		head -> prev = NULL;
		free(ptr);	
		
		printf("\nOne node deleted from the begining ...");  
	}
	
}

void last_insert(){
	
	struct node *new_node, *temp;
	int x;
		
	new_node = (struct node *)malloc(sizeof(struct node *));
	
	if(new_node == NULL){
		
		printf("Overflow...");
		
	}else {
		
		printf("Enter Element: ");
		scanf("%d", &x);
		
		new_node -> data = x;
		new_node -> next = NULL;		
				
		if(head == NULL){
		
			new_node -> prev = NULL;
			head = new_node;
			
		}else {
			
			temp = head;
			while(temp -> next != NULL)
				temp = temp -> next;
				
			temp -> next = new_node;
			new_node -> prev = temp;

		}	
	} 		
}

void last_delete(){

	struct node *ptr, *preptr;
	
	if(head == NULL){
		
		printf("Linked List Is Empty...");	
	}
	
	else if(head -> next == NULL){
				
		head = NULL;
		free(head);
		printf("\nOne node deleted from the Last ...");
				
	}else {
		
		ptr = head;
		
		while(ptr -> next != NULL){
			
			preptr = ptr;
			ptr = ptr -> next;
		}		
		
		preptr -> next = NULL;
		free(ptr);
		printf("\nOne node deleted from the Last ...");
	}		
}

