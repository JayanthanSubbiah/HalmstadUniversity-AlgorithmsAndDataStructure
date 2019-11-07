#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,c,n;
    //To get the size of an array
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int a[size];
    //Memory allocation for given size
    int *x = malloc(sizeof(int) * size);

    //To generate random variables for given size
    for(c=0;c<size;c++){
        n=rand()%100000+1;
        x[c]=n;
    }
    int i,j,min,temp;
     for(i=0;i<size;i++)
     {
        min=i;
        //loop to check the minimum value
        for(j=i+1;j<size;j++)
        {
            if(x[j]<x[min])
                min=j;
        }
        //Swapping function
        temp=x[i];
        x[i]=x[min];
        x[min]=temp;
     }
    //To verify sorted elements
    for(i=0;i<size;i++){
        if(x[i]>x[i+1]){
            printf("\n[%d] and [%d] are not sorted",i,i+1);
        }
    }
    printf("\n All the elements are in sorted order");
}
