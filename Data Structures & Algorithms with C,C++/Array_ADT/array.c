/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    printf("\nThe Array elements :\n");
    for(int i=0;i<arr.size;i++){
        printf("%d\n",arr.A[i]);
    }
}

int main()
{
    struct Array arr;
    
    printf("Enter Size of Array : ");
    scanf("%d",&(arr.size));
    
    printf("Enter the Length of Array : ");
    scanf("%d",&(arr.length));
    
    arr.A = (int *)malloc(arr.size*sizeof(int));
    
    for(int i =0;i<arr.length;i++){
        printf("Enter Element for Index %d: ",i);
        scanf("%d",&(arr.A[i]));
    }
    
    display(arr);

    return 0;
}
