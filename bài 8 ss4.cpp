#include<stdio.h>
int main(void){
	int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (b + c > a) && (a + c > b)) {
        printf("la 3 canh tam giac");
    } else {
        printf("ko phai 3 canh tam giac");
    }
    return 0;
}
