#include<stdio.h>
int array_search(int a[], int n, int v);

void main(){
	
	int i, n, arr[n], value;
	
	printf("Enter How Many Number You Enter In Array: ");
	scanf("%d", &n);
	
	for(int x = 0; x < n; x++){
	
		printf("Enter Elements Of %d: ", x+1);
		scanf("%d", &arr[x]);
	}
	
	printf("Enter Value For Search: ");
	scanf("%d", &value);
	
	array_search(arr, n, value);
	
}

int array_search(int a[], int n, int v){
			
	int i, flag = 0;
		
	for(i = 0; i < n; i++){
		
		if(a[i] == v){
			
			printf("%d Is Found In The Array At Position: %d\n", v, i+1);
			flag = 1;
			break;
		}
	}
	
	if(flag == 0){
		printf("%d Does Not Exist In Array...", v);
	}
}
