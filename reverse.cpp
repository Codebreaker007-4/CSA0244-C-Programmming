#include<stdio.h>
int main()
{
    int num,revnum=0,rem,temp;
    printf("enter the number to be reversed :\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        revnum=revnum*10+rem;
        num=num/10;
    }
    printf("the reverse of %d is %d ",temp,revnum);
	return 0;
}

