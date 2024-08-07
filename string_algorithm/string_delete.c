#include<stdio.h>

int main(){
	
	int i, j, num, pos;
	char s1[20] = "hello\0", s2[20];
	
	i = 0;
	j = 0;
	num = 2;
	pos = 2;
	
	while(i < pos){
		
		s2[j] = s1[i];
		
		i += 1;
		j += 1;
	}
	
	/*while(num > 0){
		
		num -= 1;
		i += 1;
	}*/
	
	i += num;
	
	while(s1[i] != NULL){
		
		s2[j] = s1[i];
		
		i += 1;
		j += 1;
	}
	
	s2[j] = NULL;
	printf("Delete string: %s\n", s2);
}
