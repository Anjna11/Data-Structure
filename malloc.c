#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, *ptr, n, sum = 0;
	
	printf("Enter how many number you entering further: ");
	scanf("%d", &n);
	
	ptr = (int*)malloc(n*sizeof(int));
	
	//printf("%pc", ptr);
	
	for(i = 0; i < n; i++){
		printf("\n");
		printf("Enter Element %d: ", i + 1);
		scanf("%d", ptr + i);
		printf("address: %pc", ptr + i);
		sum += *(ptr + i);
	}
	free(ptr);	
	printf("\nSum = %d", sum);
}
