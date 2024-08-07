#include<stdio.h>

void main(){
	
	//printf("helloooooo");
	
	int i = 0, j = 0;
	char s1[20] = "HELLO\0", rev[20];
	
	while(s1[i] != NULL){
		
		i += 1;
	}	
	
	///printf("i = %d\n", i);
	
	for(j = i; j >= 0; j--){
		
		//printf("j = %d\n", j);
		printf("%c", s1[j]);
	}
	
	printf("\n");
	
	//i -= 1;
	while(i >= 0){
		
		rev[j] = s1[i];
		
		j += 1;
		i -= 1;
	}
	
	rev[j] = '\0';
	
	printf("%s", rev);
}
