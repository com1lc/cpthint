/*
 ============================================================================
 Name        : number_pair_with_add.c
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

void input_pair(Pair *pp);
void add(Pair *rp, Nums *np);

int main() {
	Nums n;
	Pair r;

	printf("PA: ");
	input_pair(&n.a);
	printf("PB: ");
	input_pair(&n.b);
	add(&r, &n);

	printf(" = (%d, %d)\n", r.u, r.v);

	return 0;
}

void input_pair(Pair *pp) {
	scanf("%d %d", &pp->u, &pp->v);
}

void add(Pair *rp, Nums *np) {
	rp->u = np->a.u + np->b.u;
	rp->v = np->a.v + np->b.v;
}
