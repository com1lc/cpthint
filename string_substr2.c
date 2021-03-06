/*
 ============================================================================
 Name        : string_substr2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* substr(char *s, char from, char to);

int main() {
	char in[128];
	char *out = NULL;
	char from, to;

	printf("Enter: ");
	scanf("%[^\n]s", in);

	printf("From: ");
	scanf(" %c", &from);

	printf("To: ");
	scanf(" %c", &to);

	//call substr appropriately
	out = substr(in, from, to);
	if (out != NULL)
		printf("= %s\n", out);
	else
		printf("--empty string--\n");

	return 0;
}

char* substr(char *s, char from, char to) {
	while (*s != from) {
		s++;
		if (*s == '\0') {
			return NULL;
		}
	}
	int inx = 0;
	while (*(s + inx) != to) {
		inx++;
		if (*(s + inx) == '\0') {
			return NULL;
		}
	}
	*(s + inx + 1) = '\0';
	return s;
}
