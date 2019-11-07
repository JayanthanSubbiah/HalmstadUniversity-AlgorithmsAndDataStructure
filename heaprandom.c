#include<stdio.h>
#include<stdlib.h>
//Max_heapify function
int Max_heapify(int x[], int size, int i)
{
    int temp;
    int large=i;
    int left=2*i+1; //left node
    int right=2*i+2; //right node
    if(left<size && x[left]>x[large])
        large=left;
    if(right<size && x[right]>x[large])
        large=right;
    //to check root node is large
    if(large!=i)
    {
        //swapping operation
        temp=x[i];
        x[i]=x[large];
        x[large]=temp;
        Max_heapify(x,size,large);
    }
}

//Heapsort
int heapsort(int x[],int size)
{
 int i,temp;
 for(i=size/2-1;i>=0;i--)
    {
        Max_heapify(x,size,i);
    }
    for(i=size-1;i>=0;i--)
    {
        //Move current root to end node
        temp=x[0];
        x[0]=x[i];
        x[i]=temp;
        Max_heapify(x,i,0);
    }
}
int main()
{
    int i,size,c,n;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int A[size];
    int *x = malloc(sizeof(int) * size);
    for(c=0;c<size;c++){
        n=rand()%size+1;
        x[c]=n;
    }
  heapsort(x,size);
    for(i=0;i<size;i++){
        if(x[i]>x[i+1]){
            printf("\n[%d] and [%d] are not sorted",i,i+1);
        }
    }
    printf("\n All the elements are in sorted order");
}
