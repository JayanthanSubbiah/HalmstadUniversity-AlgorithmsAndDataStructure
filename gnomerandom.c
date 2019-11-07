#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,c,n;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int A[size];
    int *x = malloc(sizeof(int) * size);
    for(c=0;c<size;c++){
        n=rand()%size+1;
        x[c]=n;
        }
    int i=0;
    while(i<size){
        if(i==0){
            i++;
        }
        if(x[i-1]<=x[i])
            i++;
        else{
            int temp;
            temp=x[i-1];
            x[i-1]=x[i];
            x[i]=temp;
            i--;
            }
        }
    for(i=0;i<size;i++){
        if(x[i]>x[i+1]){
            printf("\n[%d] and [%d] are not sorted",i,i+1);
        }
    }
    printf("\n All the elements are in sorted order");
}
