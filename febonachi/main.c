#include<stdio.h>
  int main()
    {
        int a,feb,feb1,n,i=0;
         feb1=1;
         a=1;
        printf("enter a value from where you want febonachi series : ");
        scanf("%d",&n);
        
        for(i=1;i<n-1;i++)
        {
            if(feb1 == 1 && a ==1)
             printf("%d %d", feb1 ,a);
              feb = feb1 + a; 
             printf(" %d",feb);
              a=feb1;
              feb1=feb; 
              
         }
        
        return 0;
    }