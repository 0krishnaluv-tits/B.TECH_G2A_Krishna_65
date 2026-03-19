#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    if(n <= 0 || n > 100000) {
        printf("Invalid size!\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal:  ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    // Reverse logic
    for(int i = 0, j = n-1; i < j; i++, j--) 
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    printf("Reversed:  ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}