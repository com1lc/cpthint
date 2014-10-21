/*
 ============================================================================
 Name        : sub_string3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* substr(char *s, char from, int len);

int main() {
	char in[128];
	char *out = NULL;
	char from;
	int len;

	printf("Enter: ");
	gets(in);

	printf("From: ");
	scanf("%c", &from);

	printf("Len: ");
	scanf("%d", &len);

	//call substr appropriately
	out = substr(in, from, len);
	if (out != NULL)
		printf("= %s\n", out);
	else
		printf("--empty string--\n");

	return 0;
}

char* substr(char *s, char from, int to) {
	while (*s != from) {
		s++;
		if (*s == '\0') {
			return NULL;
		}
	}
	int inx = 0;
	while (inx < to) {
		inx++;
		if (*(s + inx) == '\0') {
			return NULL;
		}
	}
	*(s + inx) = '\0';
	return s;
}

