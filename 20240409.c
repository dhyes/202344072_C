#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    while (1)
    {
        if(n==i){
            break;
        }
   
        else if(i%2==0){
            sum+=i;
        }
        i++;
   
    }
    printf("%d",sum);
}