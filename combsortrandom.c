#include<stdio.h>
#include<stdlib.h>

int newgap(){
    int gap;
    gap=(gap*10)/13;
    if(gap<1)
        return 1;
    return gap;
    };
int main()
{
    int size,c,n,gap;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int A[size];
    int *x = malloc(sizeof(int) * size);
    for(c=0;c<size;c++){
        n=rand()%size+1;
        x[c]=n;
        }
    //sorting
    gap=size;
    int i,temp;
    int swap=1;
    //Loop to run gap more than 1 and last got swap
    while(gap!=1||swap==1){
        //To find next gap
        gap=newgap(gap);
        swap=0;
        //Loop for comparing all elements with in the gap
        for(i=0;i<size-gap;i++){
                if(x[i]>x[i+gap]){
                    //Swapping function
                    temp=x[i];
                    x[i]=x[i+gap];
                    x[i+gap]=temp;
                    swap=1;
                }
            }
    }
    for(i=0;i<size;i++){
        if(x[i]>x[i+gap])
            printf("\n[%d] and [%d] are not sorted",i,i+1);
        }
    printf("\n All the elements are in sorted order");
}
