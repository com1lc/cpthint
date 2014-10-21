/*
 ============================================================================
 Name        : number_pair.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int u;
	int v;
} Pair;

typedef struct {
	Pair a;
	Pair b;
} Nums;

void input_pair(Pair *pt);
int sum(Nums *nt);

int main() {
	Nums n;

	printf("PA: ");
	input_pair(&n.a);
	printf("PB: ");
	input_pair(&n.b);
	printf(" = %d\n", sum(&n));

	return 0;
}

void input_pair(Pair *pt) {
	scanf("%d %d", &pt->u, &pt->v);
}

int sum(Nums *nt) {
	int sum = 0;
	sum += nt->a.u + nt->a.v;
	sum += nt->b.u + nt->b.v;
	return sum;
}

