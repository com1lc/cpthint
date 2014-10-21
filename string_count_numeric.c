/*
 ============================================================================
 Name        : string_count_numeric.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* str_end(char *s);
int count_numeric(char *s, char *end);

int main() {
	char s[128];
	char *end = NULL;

	printf("Enter: ");
	scanf("%[^\n]s", s);

	//call str_end and count_numeric appropriately
	end = str_end(s);
	printf("= %d\n", count_numeric(s, end));

	return 0;
}

char* str_end(char *s) {
	while (*s != '\0') {
		s++;
	}
	return s;
}

int count_numeric(char *s, char *end) {
	int count = 0;
	while (s != end) {
		if (*s >= '0' && *s <= '9') {
			count++;
		}
		s++;
	}
	return count;
}
