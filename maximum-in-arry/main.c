
#include<stdio.h>

int main()
{
    int a[10] ,i;
    int max=0;
    
    printf("enter the values of array :");
    
    for(i=0;i<=10;i++)
    {
        scanf("\n%d ",&a[i]);
        
        if(max < a[i])
           max=a[i];
    }
    
    printf("\n%d",max);
    
    return 0;
}