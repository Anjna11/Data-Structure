#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, *ptr, n, sum = 0;
	
	printf("Enter how many number you entering further: ");
	scanf("%d", &n);
	
	ptr = (int*)calloc(n,sizeof(int));
	
		for(i = 0; i < n; i++){
		
		printf("Enter Element %d: ", i + 1);
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	free(ptr);
	printf("Sum = %d", sum);
}
