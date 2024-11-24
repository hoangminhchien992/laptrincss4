#include<stdio.h>
int main(void){
	int number;
	if (0 <= number && number < 50) {
        printf("10 nghin dong");
    } else if (50 <= number && number < 100) {
        printf("15 nghin dong");
    } else if (100 <= number && number < 150) {
        printf("20 nghin dong");
    } else if (150 <= number && number < 200) {
        printf("25 nghin dong");
    } else {
        printf("30 nghin dong");
    }
    return 0;
}