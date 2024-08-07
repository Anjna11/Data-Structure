#include<stdio.h>

void main() {
	
	int i;
	char str[] = "hello\0";
	
	i = 0;
	
	while(str[i] != NULL) {
	
		i += 1;
	}
	
	printf("%d", i);
}

