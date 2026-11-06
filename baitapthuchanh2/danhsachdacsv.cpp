#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char hoten[100], msv[20];
	float d1,d2,d3;
}sv;
int main(){
	int n;
	sv a[];
	printf("nhap so luong sinh vien");
	scanf("%d", &n);
	for(int i = 0; i< n ; i++){
		printf("nhap sinh vien thu %d\n", i);
		printf("hoten: ");
		scanf("%s", a[i].hoten);
		printf("\nmsv");
		scanf("%s", a[i].msv);
		printf("diem1");
		scanf("%f", a[i].d1);
		printf("diem2");
		scanf("%f", a[i].d2);
		printf("diem3");
		scanf("%f", a[i].d3);
		}
	for(int i=0; i<n;i++){
		printf("hoten: %s\nmsv: %s\ndiem1= %.2f\ndiem2 =%.2f\ndiem3 =%.2",a[i].hoten, a[i].msv, a[i].d1, a[i].d2, a[i].d3 );
	}
}
