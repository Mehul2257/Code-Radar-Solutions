#include<stdio.h>
int main()
{
int a,b,sum;
printf("Enter the number\n");
scanf("%d %d",&a,&b);

if(a>0 || b>0){
    sum=a+b;
    printf("%d",sum);
}
else
printf("Number is invalid");

return 0;
}

