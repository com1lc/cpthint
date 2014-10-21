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

char* substr(char *s, char from, int len) {
	while (*s != '\0') {
		if (from == *s)
			break;
		else if (*(s + len) == '\0')
			return NULL;
		s++;
	}
	*(s + len) = '\0';
	return s;
}
