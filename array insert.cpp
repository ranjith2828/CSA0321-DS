#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, i, pos, value;
  
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    printf("\nOriginal Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
 
    printf("\nEnter the position of the element to delete: ");
    scanf("%d", &pos);
    
    if (pos >= 0 && pos < n) {
        for (i = pos; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
    
        printf("\nArray after deleting the element:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("\nInvalid position!");
    }
    
 
    printf("\nEnter the position where you want to insert an element: ");
    scanf("%d", &pos);
    
    if (pos >= 0 && pos <= n) {
        printf("Enter the value to insert: ");
        scanf("%d", &value);
        
        for (i = n; i > pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos] = value;
        n++;
       
        printf("\nArray after inserting the element:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("\nInvalid position!");
    }
    
   
    printf("\n\nFinal Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
