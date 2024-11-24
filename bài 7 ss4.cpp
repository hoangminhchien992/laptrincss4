#include<stdio.h>
int main(void){
	int number;
    scanf("%d", &number);
    if (number % 400 == 0 && number % 100 != 0 || number % 400 == 0) {
        printf("nam nhuan");
    }else {
        printf("khong phai nam nhuan");
    }
}