#include<stdio.h>
void read(int *p);
int main() {
    int a[100],i;
    for(i=0;i<5;i++)
		read(a+i);
	for(i=0;i<5;i++)
		printf("\n%d", *(a+i));
}
void read(int *p){
    scanf("%d", p+2);
}
