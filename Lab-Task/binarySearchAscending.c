//Search Item using Binary Search ascending Algorithm
#include<stdio.h>
int main(){
    int leng,i,item,start,range,midValue;
    int flag;

    while(1==1){
        printf("Enter how many numbers you want to insert: ");
        scanf("%d", &leng);
        if(leng == 0){
            return;
        }

        int numbers[leng+1];
        printf("Enter the numbers: ");

        for(i=1; i<=leng; i++){
            scanf("%d",&numbers[i]);
        }
        printf("Enter the search item:");
        scanf("%d",&item);

        start = 1, range=leng;

        while(start<=range){

            midValue = (start+range)/2;
            if(item<numbers[midValue]){
                range=midValue - 1;
            }

            else if(item>numbers[midValue]){
                start = midValue + 1;
            }

            else{
                flag=1;
                break;
            }
        }

        if(flag==1){
            printf("%d is present in the list in location %d\n",item,midValue);
        }

        else{
            printf("%d is not present in the list\n",item);
        }

        printf("\n");
        flag=0;
    }

    return 0;
}
