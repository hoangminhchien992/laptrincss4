#include<stdio.h>
int main(void){
	int number;
	scanf("%d" , &number);
	if (number % 3 == 0 && number % 5 == 0) {
        printf("so chia het cho  3 và 5");
    } else if (number % 5 == 0) {
        printf("so chia het cho 5");
    } else if (number % 3 == 0) {
        printf("so chia het cho 3");
    } else {
        printf("ko chia het");
    }
	return 0;
}