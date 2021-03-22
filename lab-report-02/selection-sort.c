//Fatima
//Batch: E-76th
//Roll:19

//selection sort ascending and descending order

#include<stdio.h>
#include<stdlib.h>
    int main(){
    int list[100], N, choice, i, j, min_index, temp;


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

/**********************************/
/*********************************/
    for (i = 0; i < N; i++){
    printf("Enter your %d number:",i);
    scanf("%d", &list[i]);
    }

    //selection sort for ascending order
if(choice == 1){
  for (i = 0; i < N; i++){
    min_index = i;
for (j = i + 1; j < N; j++){
      if (list[j] < list[min_index]){
        min_index = j;
      }
    }
    //swap two numbers[i,min index]
    int temp = list[i];
    list[i] = list[min_index];
    list[min_index] = temp;
  }
}

//selection sort for descending order
if(choice == 2){
    for (i = 0; i < N; i++){

for (j = i + 1; j < N; j++){
      if (list[i] < list[j]){
        temp = list[i];
        list[i] = list[j];
        list[j] = temp;
      }
    }
  }
}

/**********************************/
/*********************************/
 //output section
    printf("After sorting the list: \n");
    for(i = 0 ; i < N; i++){
        printf("%d",list[i]);
    }
    printf("\n");


}
return 0;
}
