#include <stdio.h>
#include <stdlib.h>
// kartik vhonale
int main()
{
    int *one,i,n,ele,min,max,mid;
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
    printf("please write the array in sorted manner");
    for (i=0;i<n;i++) scanf("%d", one + i);
    if(*(one+n-1)>*(one+0)){
        min=0;
        max=n-1;
    }
    else{
        max=0;
        min=n-1; 
    }
    mid=(min+max)/2;
    printf("write the element to be search in an array : ");
    scanf("%d",&ele);
    while(min<=max){
        mid=(min+max)/2;
        if(*(one+mid)>ele){
            max=mid-1;
        }
        else if (*(one+mid)<ele){
            min=mid+1;
        }
        else if(*(one+mid)==ele){
            printf("element %d is found in array at %d",ele,mid);
            break;
        }
        
    }

    return 0;
}