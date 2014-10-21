/*
 ============================================================================
 Name        : str_reverse_part.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* s_end(char *s);
int is_reverse_part(char *s1, char *s2);

int main() {
	char s1[128], s2[128];

	printf("S1: ");
	scanf(" %[^\n]s", s1);
	printf("S2: ");
	scanf(" %[^\n]s", s2);

	printf("= %s\n", is_reverse_part(s1, s2) ? "Yes" : "No");
	return 0;
}

char* s_end(char *s) {
	while (*s != '\0') {
		s++;
	}
	return --s;
}

int is_reverse_part(char *s1, char *s2) {
	char *e1;
	e1 = s_end(s1);
	while (s1 != e1) {
		if (*e1 != *s2 && *s2 != '\0') {
			return 0;
		}
		if (*s2 != '\0') {
			++s2;
		}
		--e1;
	}
	if (*e1 != *s2 && *s2 != '\0') {
		return 0;
	}
	return 1;
}
