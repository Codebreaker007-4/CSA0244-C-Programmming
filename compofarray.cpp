#include<stdio.h>
int main()
{
    int a[100],i,s,count=0;
    printf("enter the size of an array :\n");
    scanf("%d",&s);
    printf("enter the elements in array :\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        if(a[i]==2)
        {
            continue;
        }
        else if(a[i]%2)
        {
            count++;
        }
        if(count>2)
        {
            
        }
    }
    printf("the total composite numbers are : %d",count);
    return 0;
}  

