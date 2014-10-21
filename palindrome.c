/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* s_end(char *s);
int palin(char *s, char *f);

int main() {
	char s[128];
	char *f;

	printf("Enter: ");
	scanf("%s", s);

	printf("= %s\n", palin(s, f) ? "Yes" : "No");
	return 0;
}

char* s_end(char *s) {
	while (*s != '\0') {
		s++;
	}
	return --s;
}

int palin(char *s, char *f) {
	f = s_end(s);
	while (s < f) {
		if (*s != *f) {
			return 0;
		}
		s++;
		f--;
	}
	return 1;
}
