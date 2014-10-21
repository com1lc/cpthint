/*
 ============================================================================
 Name        : char_replaces.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* find_ch(char *s, char v);

int main() {
	char s[128];
	char from, to;
	char *cptr = NULL;

	printf("string: ");
	scanf("%[^\n]s", s);

	printf("from: ");
	scanf(" %c", &from);
	printf("to: ");
	scanf(" %c", &to);

	//use find_ch to process the text
	cptr = find_ch(s, from);
	while (cptr != NULL) {
		*cptr = to;
		cptr = find_ch(s, from);
	}

	printf("= %s\n", s);
	return 0;
}

char* find_ch(char *s, char v) {
	while (*s != v) {
		if (*s == '\0')
			return NULL;
		s++;
	}
	return s;
}
