/*
 ============================================================================
 Name        : char_diff.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int char_diff(char *sa, char *sb);

int main() {
	char sa[128];
	char sb[128];

	printf("Enter SA: ");
	scanf("%s", sa);

	printf("Enter SB: ");
	scanf("%s", sb);

	printf("= %d\n", char_diff(sa, sb));
	return 0;
}

int char_diff(char *sa, char *sb) {
	int count = 0;
	while (!(*sa == '\0' && *sb == '\0')) {
		if (*sa != *sb) {
			count++;
		}
		if (*sa != '\0') {
			sa++;
		}
		if (*sb != '\0') {
			sb++;
		}
	}
	return count;
}

