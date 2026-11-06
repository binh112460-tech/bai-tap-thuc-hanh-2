#include <stdio.h>
typedef struct{
	char hoten[30], msv[20];
	float d1, d2, d3;
}sv;
typedef struct node{
	sv data;
	struct node *next;
}node;
typedef struct{
	node *phead;
	node *ptail;
}dslk;
