#include <stdio.h>
#include <string.h>

int main() {

    int i, n;
    int arr[50];
    printf("Enter the number of elements to be stored in array(atleast 3) : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
   int last1, last2;
   last1 = arr[n - 1];
   last2 = arr[n - 2];

   for (i = n - 1; i > 1; i--){
    arr[i] = arr[i - 2];
   }
   arr[0] = last2;
   arr[1] = last1;

   for(i = 0; i < n; i++){
    printf("%d", arr[i]);
   }


    return 0;
}
