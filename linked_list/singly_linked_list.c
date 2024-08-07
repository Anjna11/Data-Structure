#include<stdio.h>

struct node {
	
	int data;
	struct node *next;
};


struct node *HEAD = NULL;


void insertLast() {

	printf("Inserting at last.");
	
	
	// Collect data from user.
	int item;
     printf("\nEnter value?\n");  
     scanf("%d",&item);       



}

void displayList() {

	printf("Display list...")
	


}


void main() {


	int n, i;
	
	do{
		printf("\n -------------------------------------------- ");
		printf("\nMain Manu: \n\t1.insertLast \n\t2.displayList \n\t3.exit");
		printf("\nEnter Your Choice: ");
		scanf("%d", &n);	
	
		switch(n){
						
			case 1:
				insertLast();
				break;
				
			case 2:
				displayList();
				break;
			
		}
		
	}while(n != 3);	

}
