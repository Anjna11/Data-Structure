#include<stdio.h>

#define TOTAL 50

void push(int val);
void display();
void pop();
void update(int pos, int val);


struct stack {
	int stack[TOTAL];
	int top;
}s, s1;

void main() {

	s.top = -1;

	// PUSH To stack
	
	push(5);
	push(8);
	push(90);
	push(15);
	push(80);
	
	
	pop();
	
	push(90);
	
	
	display();
	
	update(3, 56);
	
	display();
	
	printf("\nThis is Stack...");

}

void push(int val) {
	s.top += 1;
	s.stack[s.top] = val;
}

void pop() {
	s.top -= 1;
}


void update(int pos, int val) {
	int new_pos = s.top - pos + 1; 
	s.stack[new_pos] = val;
}

void display() {
	printf("\n==============");
	for(int i = s.top; i >= 0; i--) {
		printf("\n%d", s.stack[i]);
	}
	
}
