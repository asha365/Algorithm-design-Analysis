#include<stdio.h>
int main(){
    int i, low, high, middle, n, key, array[100];
    scanf("%d",&n);

    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
        printf("Enter value to find\n");
        scanf("%d",&key);

        low = 0;
        high = n - 1;
        middle = (low+high)/2;

        while(low <= high){
            if(array[middle] > key)
                 low = middle + 1;


            else if(array[middle] == key){
               printf("%d found at location %d.\n",key,middle + 1);
               break;
               }

            else
                high = middle - 1;
                middle = (low+high)/2;

        }
        if(low > high)
             printf("not found %d is n't present in the list.\n",key);

        return 0;
}
