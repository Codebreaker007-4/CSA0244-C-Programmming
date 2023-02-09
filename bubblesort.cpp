#include <stdio.h>

int main(){

    int arr[50],s,i,j,temp;    

    printf("Enter the size of an array: ");

    scanf("%d",&s);    

    printf("Enter the Value of an elements: ");

    for(i=0;i<s;i++)

        scanf("%d",&arr[i]);

    for(i=0;i<s-1;i++)
	{       

        for(j=0;j<s-i-1;j++)
		{          
            if(arr[j]>arr[j+1]){               

                temp=arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=temp;

            }

        }

    }

    printf("Array after implementing bubble sort: ");

    for(i=0;i<s;i++){

        printf("%d",arr[i]);

    }

    return 0;

}
