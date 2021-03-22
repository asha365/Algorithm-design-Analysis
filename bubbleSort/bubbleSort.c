//bubble sort
#include<stdio.h>
int main(){
    int array[100], length, i, j, swap;
     printf("Enter how many numbers you want to insert:");
     scanf("%d", &length);
     printf("Enter the numbers:",length);

     for(i=0; i<length; i++)
        scanf("%d", &array[i]);

        /*while(1){
              printf("Press 1. For ASCENDING ORDER\n");
              printf("Press 2. For DESCENDING ORDER\n");
              printf("Press 3. EXIT\n");
              printf("Enter Your Choice:\n");
              scanf("%d",&length);
        }*/



    for(i=0; i<length-1; i++){
        for(j = 0; j < length-i-1; j++){
            if(array[j] > array[j+1]){

                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }



    printf("sorted list in ascending order:\n");
    for(i=0; i<length; i++)
        printf("%d\n", array[i]);


return 0;
}
