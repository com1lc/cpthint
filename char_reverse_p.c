/*
 ============================================================================
 Name        : char_reverse_p.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* str_end(char *s);
void print_reverse(char *s, char *end);

int main() {
	char s[128];
	char *end = NULL;

	printf("Enter: ");
	scanf("%[^\n]s", s);

	//call str_end appropriately
	end = str_end(s);

	printf("= ");
	print_reverse(s, end);

	return 0;
}

char* str_end(char *s) {
	while (*s != '\0') {
		s++;
	}
	return s;
}
void print_reverse(char *s, char *end) {
	while (--end != s) {
		printf("%c", *end);
	}
	printf("%c\n", *end);
}
