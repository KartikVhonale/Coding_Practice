#include <stdio.h>
#include <stdlib.h>
// kartik vhonale
int main()
{
    int *one,i,n,a, index;
    char ch;
     printf("give the hint of opertation : \npress i for insertion with one element.\npress a for insertion of element with index \npress d for deletion with index.\npress s for searching the element in the array with linear search.\n");
    scanf("%c", &ch);
    printf("give the size of array : ");
    scanf("%d", &n);
    one = (int *)calloc(n, sizeof(int));
    if (one == NULL)
    {
        printf("Error");
        exit(0);
    }
    // input
    printf("\n Enter elements:");
    for (i=0;i<n-1;i++)
    {
        scanf("%d", one + i);
    }
    *(one+i) = 999;
    // output
    for (i=0;i<n;i++)
    {
        printf("the element at address %d is %d\n", one + i, *(one + i));
    }
    // switch cases:
    switch (ch)
    {
    case 'i':
    { // insertion
        printf("give element to insert");
        scanf("%d", &a);
        n++;
        one = (int *)realloc(one, n);
        *(one + n-1) = a;
        break;
    }
    case 'a':
    {
        // insertion with index:
        printf("give element to insert");
        scanf("%d", &a);
        printf("give the index of element:");
        scanf("%d", &index);
        if (index>n+1)
        {
            printf("invalid index.");
        }
        else
        {
            n++;
            for (i=n;i>=index;i--)
            {
                *(one + i + 1) = *(one + i);
            }
            *(one + index) = a;
        }
        break;
    }
    case 'd':
    { // deletion
        printf("\n Enter the index to delete an element : ");
        scanf("%d", &index);

        if (index > n)
            printf("Invalid Index");
        else
        {
            for(i=index+1;i<n;i++)
                *(one+i-1)=*(one+i);
        }
        n--;
        break;
    }
    case 's':{
        printf("\n Enter element to be find in the array: ");
        scanf("%d",&a);
        for(i=0;i<n;i++){
            if(*(one+i)==a){
                printf("element %d is found at index %d",a,i+1);
                break;
            }
        }
        if(i==n){
            printf("element %d is not found in the array",a);
        }
        break;
    }
    default:
    {
        printf("\nyou have not given acceptable input... '_' ");
        break;
    }
    }
    printf("finally we get: \n");
    for(i=0;i<10;i++){
        printf("-----------");
    }
    for (i=0;i<n;i++){
        printf("\nthe element at address %d is %d", one + i, *(one + i));
    }
    return 0;
}
