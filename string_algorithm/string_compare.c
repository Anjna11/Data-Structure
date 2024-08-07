#include<stdio.h>
#include<string.h>

int main(){
	
	int i = 0, l1, l2;
	char s1[20] = "hello\0", s2[20] = "hlllo\0";
	
	l1 = strlen(s1);
	l2 = strlen(s2);
	
	printf("s1 length = %d\n", l1);
	printf("s2 length = %d\n", l2);
	
	if(l1 != l2){
		
		printf("Strings Are Not Equal...");
		return 0;
	}
	
	while(i < l1){
		
		if(s1[i] != s2[i]){
			printf("Strings Are Not Equal...");
			return 0;
		}
		else {                
			i += 1;                		                                                      
		}
		
	}
	
	if(i == l1){
		printf("Both strings are equal...");
	}
	
}
