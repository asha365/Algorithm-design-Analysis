//Algorithm rules:
//Algorithm name: binary-search ascending algorithm
//Algorithm pera meter: L, N, Key
//Indentation

#include<stdio.h>
int main(){
    int length, i, item, beg, end, mid;
    int flag;

    while(1==1){
        printf("Enter how many numbers you want to insert:");
        scanf("%d",&length);

        if(length == 0){
            return;
        }

        int numbers[length+1];
        printf("Enter the numbers:");

        for(i = 1; i<=length; i++){
            scanf("%d",&numbers[i]);
        }

        printf("Enter the search item:");
        scanf("%d",&item);

        beg = 1, end = length;
        while(beg<=end){
            mid = (beg+end)/2;
            if(item < numbers[mid]){
                end = mid-1;
            }
            else if(item>numbers[mid]){
                beg = mid+1;
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            printf("%d is present in the list in location %d\n",item,mid);
        }
        else{
            printf("%d is not present in the list \n", item);
        }
        printf("\n");
        flag = 0;
    }


return 0;
}
