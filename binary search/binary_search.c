#include<stdio.h>
int main(){
    int a[] = {1, 2, 4, 5, 67, 89, 100};
    //searching item
    int item = 674;
    //3 pointer
    int left, right, middle;
    //starting position
    left = 0;
    //total data
    right = 6;
    //middle find out


    //loop
    while(left <= right){
     middle = (left+right)/2;
    if(a[middle] == item){
        printf("item found at index %d\n",middle);
        return 0;
    }
    else if(a[middle] < item){
        left = middle + 1;
    }
    else{
        right = middle - 1;
        }
    }
    printf("item is not present in the list\n");

    return 0;
}
