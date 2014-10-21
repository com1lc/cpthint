/*
 ============================================================================
 Name        : sub_string5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char* find_ch(char *s, char key);
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
char* find_ch(char *s, char key) {
	while (*s != '\0') {
		if (key == *s)
			return s;
		s++;
	}
	return NULL;
}
char* substr(char *s, char from, int len) {
	s = find_ch(s, from);
	if (s == NULL) {
		return s;
	}
	int inx = 0;
	while (inx < len) {
		inx++;
		if (*(s + inx) == '\0') {
			return NULL;
		}
	}
	*(s + inx) = '\0';
	return s;
}
