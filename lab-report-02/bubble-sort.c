//Fatima
//Batch: E-76th
//Roll:19

//bubble sort ascending and descending order
#include<stdio.h>
int main()
{
/******************************/
   int array[100], length, i, j, a, swap;
     printf("Enter how many numbers you want to insert:");
     scanf("%d", &length);
     printf("Enter the numbers:",length);

     for(i=0; i<length; i++)
        scanf("%d", &array[i]);
/******************************/

/******************************/
 while(1)
 {
  printf("Press 1 for ascending order sorting\n");
  printf("Press 2 for descending order sorting\n");
  printf("Enter your choice :\n");
  scanf("%d",&swap);
/******************************/

/******************************/
 switch(swap)
 {
  case 1:  for(i=0;i<length;i++)
    {
     for(j=i+1;j<length;j++)
     {
      if(array[i]>array[j])
       {
        a=array[i];
               array[i]=array[j];
        array[j]=a;
       }
      }
     }
/******************************/

/******************************/
  printf("\n ascending order sorted value:\n");
  for(i=0;i<length;i++)
  {
    printf("%d\n",array[i]);
  }
  break;
     case 2:   for(i=0;i<length;i++)
           {
     for(j=i+1;j<length;j++)
     {
       if(array[i]<array[j])
       {
         a=array[i];
         array[i]=array[j];
         array[j]=a;
       }
      }
    }
/******************************/

/******************************/
  printf("\n descending order sorted value:\n");
  for(i=0;i<length;i++)
  {
   printf("%d\n",array[i]);
  }
  break;
   default:printf("\n invalid value \n");
         break;
 }
/******************************/
    }
   return 0;
}
