#include<stdio.h>

void main() {
	
	int i;
	char str1[20], str2[] = "hello\0";
	
	i = 0;
	while(str2[i] != NULL) {
		
		str1[i] = str2[i];
		i += 1;
	}
	
	printf("%s", str1);
}


