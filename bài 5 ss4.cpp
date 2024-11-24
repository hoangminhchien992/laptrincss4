#include<stdio.h>
int main(void){
	int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < c && c < b) {
        printf("nam giua a va b");
    } else {
		printf("ko nam giua a va b");
	} 
    return 0;	
}