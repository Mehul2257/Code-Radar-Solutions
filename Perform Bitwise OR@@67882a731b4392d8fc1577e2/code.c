#include<stdio.h>
int main()
{
int a,b,sum;
printf("Enter the number\n");
scanf("%d %d",&a,&b);

sum=a|b;
if(a>0 && b>0){
    printf("%d",sum);
}
return 0;
}
