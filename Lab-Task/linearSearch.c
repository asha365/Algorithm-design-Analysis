//Search Item using Linear Search Algorithm

#include<stdio.h>
int main(){
    int leng,i,item;
    int flag;
    while(1==1){
        printf("Enter how many numbers you want to insert: ");
        scanf("%d", &leng);
        if(leng == 0){
            return;
        }

        int numbers[leng + 1];
        printf("Enter the numbers: ");

        for(i=1; i<=leng; i++){
            scanf("%d",&numbers[i]);
        }

        printf("Enter the search item:");
        scanf("%d",&item);

        for(i=1; i<=leng; i++){
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
