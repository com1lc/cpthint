/*
 ============================================================================
 Name        : count_symbols.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SYM_NUM 5

char* find_ch(char *s, char v);

char symbols[SYM_NUM] = { '*', '+', '-', '%', ',' };

int main() {
	char s[128];
	char *ptr = NULL;
	int i, count = 0;

	printf("Enter: ");
	scanf("%[^\n]s", s);

	for (i = 0; i < 5; i++) {
		ptr = find_ch(s, symbols[i]);
		while (ptr != NULL) {
			count++;
			ptr = find_ch(++ptr, symbols[i]);
		}
	}

	printf("= %d\n", count);

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
