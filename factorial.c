#include <stdio.h>
int main(){
    
    int a,i;
   unsigned long long fact = 1;
    printf("enter the value of a: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    fact *=i;
    printf("factorial of a = %llu\n",fact);
    return 0;
}