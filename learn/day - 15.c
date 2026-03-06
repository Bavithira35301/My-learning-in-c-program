//program to find largest element in array
#include <stdio.h>

int main() {
    int a[10],i,n,largest;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    largest=a[0];

    for(i=1;i<n;i++)
        if(a[i]>largest)
            largest=a[i];

    printf("Largest = %d",largest);

    return 0;
}