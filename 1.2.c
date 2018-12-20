#include<stdio.h>
int main () {
	char ch, *p, check[100];
	
	printf("Enter parentheses and/or braces: ");
	
	p = check;

	for(;;){
	
	ch = getchar();
	
	if(ch == '{'  || ch == '(') {
		p++;
		*p = ch;
		
	}
	
	if(ch == '}' ) {
		if(*p == '{') p--;
		else {
			printf("Parentheses/braces are NOT nested properly\n");
			return 0;
		}
	}
	
	
	
	if(ch == ')' ) {
		if(*p == '(') p--;
		else {
			printf("Parentheses/braces are NOT nested properly\n");
			return 0;
		}
	}
	
	if(ch == '\n') {
	  if(p != check) {printf("Parentheses/braces are NOT nested properly\n");
			return 0;
	  }
	printf("Parentheses/braces are nested properly\n"); break;
}
	
	
} }
