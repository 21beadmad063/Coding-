

#include <stdio.h>

int main()
{
   int n,r;
   scanf("%d%d",&n,&r);
   int num=1,den=1;
   //if(r==0) return 1;
   for(int i=n;i>n-r;i--)
      num*=i;
   for(int i=1;i<=r;i++)
       den*=i;
printf("%d",num/den);

    return 0;
}
