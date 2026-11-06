#include <stdio.h>
#include <stdlib.h>
int main(){
	int h, c;
	printf("nhap so hang, so cot: ");
	scanf("%d %d", &h, &c);
	float **a = (float**)malloc(h * sizof(float*));
	for(int i = 0; i< h ; i++){
		a[i]=(float*)malloc(c* sizeof(float));
	}
	printf("nhap mang 2 chieu");
	for(int i=0; i<h; i++){
		for(int j = 0; j< c; j++){
			printf("a[%d][%d]= ", i, j);
			scanf("%f", &a[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i<h ; i++){
		free(a[i]);
	}
	free(a);
}

