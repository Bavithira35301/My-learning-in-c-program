//Basic subtraction program
#include <stdio.h>
int main() {
    int num1, num2, result;
    printf("Two numbers separated by space: ");
    scanf("%d %d", &num1, &num2);
    result = num1-num2;
    printf("The difference of %d and %d is %d\n",num1,num2, result);
    return 0;
}