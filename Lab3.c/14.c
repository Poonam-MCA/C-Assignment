#include <stdio.h>

int main() {
    int n, i, search, flag = 0;
    int arr[100];
    
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    
    
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    printf("Enter the element to search: ");
    scanf("%d", &search);
    
    
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at position: %d\n", i);
            flag = 1;
            break;
        }
    }
    
    if(flag == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
