#include<stdio.h>

//Search Item using Linear Search Algorithm
int main(){
    int length,i,item;
    int flag;
    while(1==1){
        printf("How many number you want to insert? ");
        scanf("%d", &length);
        if(length==0){return;}

        int numbers[length+1];
        printf("Enter the numbers: ");

        for(i=1; i<=length; i++){
            scanf("%d",&numbers[i]);
        }
        printf("Enter the search item:");
        scanf("%d",&item);

        for(i=1; i<=length; i++){
            if(numbers[i]==item){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d is present in the list in location %d\n",item,i);
        }
        else{
            printf("%d is not present in the list\n",item);
        }
        printf("\n");
    }
    return 0;
}
