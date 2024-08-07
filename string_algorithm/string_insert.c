#include<stdio.h>

int main(){
	
	int i, j, k, pos;	
	char s1[20] = "heo\0", s2[20] = "@lll@\0", s3[20];
	
	i = 0;
	j = 0;
	k = 0; 
	pos = 2;
	
	while(i < pos){
		
		s3[k] = s1[i];
		
		i += 1;
		k += 1;
	}	
	
	while(s2[j] != NULL){
		
		s3[k] = s2[j];
		
		j += 1;
		k += 1;
	}
	
	while(s1[i] != NULL){
		
		s3[k] = s1[i];
		
		i += 1;
		k += 1;
	}
	
	s3[k] = NULL;
	
	printf("Inserted string is %s\n", s3);
	
}


