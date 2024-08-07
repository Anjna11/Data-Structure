#include<stdio.h>

void main(){
	
	int i = 0, j = 0;
	char s1[20] = "Hello\0", s2[20] = "kuku\0";
	
	while(s1[i] != NULL){
		i += 1;
	}
	
	printf("Len of A=%d", i);
	
	printf("-----");
	
	while(s2[j] != NULL){
		
		s1[i] = s2[j];
		printf("\n%d, %d, %c, %c", i, j, s1[i], s2[j]);
		
		i += 1;
		j += 1;
	}


	s1[i] = '\0';
	
	printf("\n%s\n",s1);
	
}
