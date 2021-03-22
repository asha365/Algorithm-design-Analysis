//Search item using Binary Search (ASC) Algorithm

#include<stdio.h>
int main(){
 int length, i, item, beg, end, middle;
 int flag;

 while(1==1){
    printf("Enter how many numbers you want to insert :");
    scanf("%d",&length);
    if(length==0){
        return;
    }

    int numbers[length+1];
    printf("Enter the numbers:");

    for(i=1; i<length; i++){
        scanf("%d",&numbers[i]);
    }

    printf("Enter the search item:");
    ("%d",&item);

    beg = 1, end = length;
    while(beg <= end){
        middle = (beg+end)/2;

        if(item < numbers[middle]){
            end = middle-1;
        }
        else if(item > numbers[middle]){
            beg = middle+1;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag==1){
        printf("%d is present in the list in location %d\n",item,middle);
    }
    else{
        printf("%d is not present in the list \n",item);
    }
    printf("\n");
    flag=0;
 }

return 0;
}
