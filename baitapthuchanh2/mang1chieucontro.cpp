#include <stdio.h>
#include <stdlib.h>
void in(float *a, int n){
	for(int i=0;i<n; i++){
		printf("%f", a[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	float *a = (float *)malloc(n* sizeof(float));
	if(a = NULL){
		printf("bo nho da day\n");
		exit(0);
	}
	else{
		for(int i =0; i<n; i++){
			printf("nhap so phan tu: ");
			scanf("%f", &a[i]);
		}
	}
	in(a, n);
	free(a);
	return 0;
}
