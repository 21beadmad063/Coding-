

#include <stdio.h>
#include <math.h>
void prime(int n){
    if(n==0 || n==1 ){
        printf("Not a Prime");
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
          printf("Not a Prime");
          return ;
        }
    
    }
    printf("Prime");
}

int main()
{
    int n;
    scanf("%d",&n);
    prime(n);

    return 0;
}
