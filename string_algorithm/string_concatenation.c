#include<stdio.h>

void main(){
	
	int i = 0, j = 0;
	char s1[] = "Hello\0", s2[] = "World\0", s3[20];
	
	while(s1[i] != NULL){
		
		s3[i] = s1[i];
		i += 1;
	}
	
	while(s2[j] != NULL){
	
		s3[i] = s2[j];
		i += 1;
		j += 1;
	}
	
	
	printf("%s", s3);
}
