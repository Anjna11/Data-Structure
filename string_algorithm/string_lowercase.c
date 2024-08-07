#include<stdio.h>

void main() {
	
	int i;
	char str1[20], str2[] = "DISHA\0";
	
	i = 0;
	while(str2[i] != NULL) {
		
		if(str2[i] >= 'A' && str2[i] <= 'Z') {
			
			str1[i] = str2[i] + 32;
		}
		
		i += 1;	
	}
	
	printf("%s\n", str1);

