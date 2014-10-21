/*
 ============================================================================
 Name        : longer_track.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct track {
	char title[128];
	int duration; //in seconds
};

typedef struct track Track;

void input_track(Track *t);
Track* longer(Track *ta, Track *tb);

int main() {
	Track ta, tb;
	ta.duration = 0;
	tb.duration = 0;
	printf("TA: ");
	input_track(&ta);
	printf("TB: ");
	input_track(&tb);
	printf("=%s\n", longer(&ta, &tb)->title);

	return 0;
}

void input_track(Track *t) {
	scanf("%s %d", t->title, &t->duration);
}

Track* longer(Track *ta, Track *tb) {
	if (ta->duration < tb->duration) {
		return tb;
	}
	return ta;
}
