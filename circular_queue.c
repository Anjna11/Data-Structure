#include<stdio.h>

void c_enqueue();
void c_dequeue();
void display();

int size = 10;
int q[size], F = -1, R = -1;

void c_enqueue(){

	int x;
	
	if(F == 0 && R == size-1){
		printf("Circular Queue Is Overflow...");
		
	} else if(F == -1 && R == -1){
		
		F = R = 0;
		q[R] = x;
	
	} else if(F != 0 && R == size-1){
		
		R = 0;
		q[R] = x;
		
	} else {
		
		R += 1;
		q[R] = x;
	}
}

int main(){

	int n;
	
	printf("\nMain Manu: ");
	printf("\n\t1.Insertion\n\t2.Deletion\n\t3.Display");
	printf("Enter Your Choice: ");
	scanf("%d", &n);
	
	do{
		switch(n){
			
			case 1:
				c_enqueue();
				break;
			
			case 2:
				c_dequeue();
				break;
				
			case 3:
				display();
				break;
						
		}		
	}while(n != 4);
	
	return 0;
}









