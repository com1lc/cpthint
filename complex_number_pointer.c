/*
 ============================================================================
 Name        : complex_number_pointer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int real;
    int img;  //imagine
} Complex;

void input_complex(Complex *cptr);
void add_complex(Complex *rptr, Complex *aptr, Complex *bptr);

int main(){
    Complex a, b, result;

    printf("C-A: ");
    input_complex(&a);

    printf("C-B: ");
    input_complex(&b);
    add_complex(&result, &a, &b);
    printf("= %d%+di\n", result.real, result.img);
    return 0;
}
void input_complex(Complex *cptr){
    scanf("%d %d", &cptr->real, &cptr->img);
}
void add_complex(Complex *rptr, Complex *aptr, Complex *bptr){
    rptr->real = aptr->real+ bptr->real;
    rptr->img = aptr->img + bptr->img;
}
