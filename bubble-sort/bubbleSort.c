//bubble sort
#include<stdio.h>
int main(){
    int array[] = {12, 2, 5, 3, 10};
    int i, j, size = 5;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1; j++){
            if(array[j]>array[j+1]){
                    //swap two numbers
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(i= 0; i<size; i++){
        printf("%d", array[i]);
    }
    printf("\n");
return 0;
}
