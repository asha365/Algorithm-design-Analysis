//Fatima
//Fatima
//batch: E-76th
//Roll-19
/*************************************************/
#include <stdio.h>
int main()
{
  int list[100], N, i, t, temp, choice, j;


 //menu section
    while(1){
    printf("            Menu             \n");
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


     for (i = 1; i < N; i++){
     printf("Enter your %d number:",i);
     scanf("%d", &list[i]);
  }


  if(choice == 1){
  for (i = 0; i < N; i++){
  scanf("%d", &list[i]);
  temp = i;

  for (i = 0; i < (N - 1); i++){
  temp = i;

   for (j = i + 1; j < N; j++)
    {
      if (list[temp] > list[j])
        temp = j;
    }
  }
}

    if(choice == 1){
    for (j = i + 1; j < N; j++)
   for (i = 0; i < (N - 1); i++) // finding minimum element (n-1) times
  {
    temp = i;

    for (j = i + 1; j < N; j++)
    {
      if (list[temp] > list[j])
        temp = j;
    }
    if (temp != i)
    {
      t = list[i];
      list[i] = list[temp];
      list[temp] = t;
    }
  }
    }


 //output section
 printf("After sorting the list: \n");
  for (i = 0; i < N; i++){
    printf("%d\n", list[i]);
    printf("\n");
    }
}

    }
  return 0;
}
/***********************************************/





