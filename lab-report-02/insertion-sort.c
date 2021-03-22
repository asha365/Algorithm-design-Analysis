//Fatima
//Batch: E-76th
//Roll:19

//insertion sort ascending or descending order
#include<stdio.h>
#include<stdlib.h>
int main(){
    int list[50], N, choice, i, j, temp;

    //menu section
    while(1){
    printf("           Menu             \n");
    printf("1.choose 1 for ascending order sorting:\n");
    printf("2.choose 1 for descending order sorting:\n");
    printf("3.choose 0 for exit:\n");
    printf("choose your choice:\n");
    scanf("%d",&choice);

    if(choice == 0)
    exit(0);

    //input section
    printf("Enter how many numbers you want to sort:");
    scanf("%d", &N);
    printf("\n");

    for(i = 1; i <= N; i++){
    printf("Enter your %d number:",i);
    scanf("%d", &list[i]);
    }

    //descending order
    for(i = 1; i>=N; i--){
    printf("Enter your %d number:",i);
    scanf("%d", &list[i]);
    }
    //insertion sort for ascending order sorting
    if(choice == 1){
        for(i = 2; i<=N-1; i++){
            temp = list[i];
            j = i - 1;
            while(j >= 1 && list [j] > temp){
                list [j+1] = list[j];
                j--;
            }
            list[j+1] = temp;
        }
    }
    else if(choice == 2){
            for(i = 2; i<=N; i++){
            temp = list[i];
            j = i - 1;
            while(j >= 1 && list [j] < temp){
                list [j+1] = list[j];
                j--;
            }
            list[j+1] = temp;
        }
    }

    //output section
    printf("After sorting the list: \n");
    for(i = 1; i <= N; i++){
        printf("%d",list[i]);
    }
    printf("\n");

    }
  return 0;
}














