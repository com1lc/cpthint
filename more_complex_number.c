/*
 ============================================================================
 Name        : more_complex_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM 5

typedef struct {
	int real;
	int img;  //imagine
} Complex;

void input_complex(Complex *cptr);
void top_complex(Complex *ptr, Complex *cptr);

int main() {
	Complex c, result;
	int i;
	result.real = 0;
	result.img = 0;

	for (i = 0; i < NUM; i++) {
		printf("C-%d: ", i + 1);
		input_complex(&c);
		top_complex(&result, &c);
	}

	printf("=%d%+di\n", result.real, result.img);
	return 0;
}

void input_complex(Complex *cptr) {
	scanf("%d %d", &cptr->real, &cptr->img);
}
void top_complex(Complex *ptr, Complex *cptr) {
	ptr->real += cptr->real;
	ptr->img += cptr->img;
}
