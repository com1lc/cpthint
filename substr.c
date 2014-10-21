/*
 ============================================================================
 Name        : substr.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* substr(char *s, int from, int len);

int main() {
	char in[128];
	char *out = NULL;
	int from, len;

	printf("Enter: ");
	scanf("%[^\n]s", in);

	printf("From: ");
	scanf("%d", &from);

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
char* substr(char *s, int from, int len) {
	if (len < from)
		return NULL;

	while (from > 0) {
		s++;
		from--;
	}
	*(s + len) = '\0';
	return s;
}
