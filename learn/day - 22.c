//Sum and average of array program
#include <stdio.h>

int main() {
    int a[10],i,n,sum=0;
    float avg;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        sum+=a[i];

    avg=(float)sum/n;

    printf("Sum = %d",sum);
    printf("\nAverage = %.2f",avg);

    return 0;
}