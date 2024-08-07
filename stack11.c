#include<stdio.h>


int i = 0;,
int stack[20];

void push(){

	int x;
	printf("Enter Value: ");
	scanf("%d", &x);
	
	stack[i] = x;
	i += 1;
} 

void pop(){
	
	i -= 1;
}

void display(){
	
	if(i == 0){
		printf("Stack Is Empty...");
	}	
	
	for(int j = 0; j < i; j++){
		printf("stack[%d] = %d\n", j, stack[j]);
	}
}

int main(){
	
	int n;
	
	do{
	
		printf("Main Manu: ");
		printf("\n1.Push 2.pop 3.Display 4.exit");
		printf("\nEnter Your Choice: ");
		
		scanf("%d", &n);	
		
		switch(n){
			
			case 1:
				push();
				break;
		
			case 2:
				pop();
				break;
		
			case 3:
				display();
				break;		
		}
		
	}
	while(n != 4);	
}
	
