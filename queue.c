#include<stdio.h>

int q[100], r = 0, f = 0;

void enq(){

	int x;
	printf("Enter value: ");
	scanf("%d", &x);	
	
	q[r] = x;
	r += 1;
	printf("your value is entered..");
}

void deq(){
	
	f += 1;
	printf("Element %d is deleted..", f);
}

void display(){
	
	int j;
	for(j = f; j < r; j++){
		
		printf("Element %d: %d\n", j+1, q[j]);
	}
}

void main(){
	
	int n, i;
	
	do{
		printf("\n\nMain Manu: 1.enqueue 2.dequeue 3.Display 4.exit");
		printf("\nEnter Your Choice: ");
		scanf("%d", &n);	
	
		switch(n){
						
			case 1:
				enq();
				break;
				
			case 2:
				deq();
				break;
				
			case 3:
				display();
				break;				
		}
		
	}while(n != 4);	
}
