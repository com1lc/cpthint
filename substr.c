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
	if(from > (strlen(s)-1))
      		return NULL;
	 if((from +len) < strlen(s))
       		*(s+from+len) = '\0';
    	return s+from;
	
	// int inx = 0;
	// while (inx < from) {
	// 	s++;
	// 	if (*s == '\0') {
	// 		return NULL;
	// 	}
	// 	inx++;
	// }
	// inx = 0;
	// while (inx < len - from + 1) {
	// 	if (*(s + inx) == '\0') {
	// 		return NULL;
	// 	}
	// 	inx++;
	// }
	// *(s + inx) = '\0';
	// return s;
}
