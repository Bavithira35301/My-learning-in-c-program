//basic array operations such as accessing, extracting
#include <stdio.h>

int main()
{
    int a[10], n, i, pos, m, list[10];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    /* Accessing a particular element */
    printf("Enter position to access element: ");
    scanf("%d", &pos);

    if(pos >= 1 && pos <= n)
        printf("Element at position %d = %d\n", pos, a[pos-1]);
    else
        printf("Invalid position\n");

    /* Counting total elements */
    printf("Total number of elements in the array = %d\n", n);

    /* Extracting elements based on a list */
    printf("Enter how many positions to extract: ");
    scanf("%d", &m);

    printf("Enter the positions:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &list[i]);

    printf("Extracted elements:\n");
    for(i = 0; i < m; i++)
    {
        if(list[i] >= 1 && list[i] <= n)
            printf("%d ", a[list[i]-1]);
        else
            printf("Invalid ");
    }

    return 0;
}