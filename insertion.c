#include <stdio.h>

#define MAX 100

int main() {

    int i, n, pos, ele;
    int arr[50];
    printf("Enter the number of elements to be stored in array : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Choose the position to insert a number : ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted :");
    scanf("%d", &ele);
     for(i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = ele;
    n++;

   printf("Updated array : ");
   for(i = 0; i < n; i++){
    printf("%d", arr[i]);
   }
   printf("\n");



    return 0;
}
