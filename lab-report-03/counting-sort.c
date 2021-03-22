//Fatima
//Batch: E-76th
//Roll:19

//counting sort ascending or descending order

#include<stdio.h>
    int main(){
        int a[50],n,i,j,temp;


        printf("Enter how many numbers you want to insert:");
        scanf("%d",&n);
        printf("\nEnter the numbers :");
        for(i=0; i<n;i++){
            scanf("%d",&a[i]);
        }

         for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        printf("Sorted list in ascending order:");
        for(i=0; i<n; i++){
        printf("%d",a[i]);
        }

        printf("\nSorted list in descending order:");
        for(i=n-1; i>=0;i--){
        printf("%d", a[i]);
        }

    return 0;
}



