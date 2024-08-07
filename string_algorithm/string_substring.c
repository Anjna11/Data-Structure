#include<stdio.h>

int main(){
	
	int i, j, pos, num;
	char str[20] = "computer\0", sub_str[20];
	
	j = 0;
	pos = 3;
	num = 2;
	i = pos;
	
	while(str[i] != NULL && num >= 0){
		
		sub_str[j] = str[i];
		
		i += 1;
		j += 1;
		num -= 1; 
	}
	
	printf("sub string is: %s", sub_str);
}
