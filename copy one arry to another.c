#include <stdio.h>

int main() 
{
    int source[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(source) / sizeof(source[0]);
    
    int destination[n];   // same size as source
    
    // Copy elements one by one
    for(int i = 0; i < n; i++) 
    {
        destination[i] = source[i];
    }
    
    // Print both arrays to verify
    printf("Source array     : ");
    for(int i = 0; i < n; i++) 
        printf("%d ", source[i]);
    
    printf("\nCopied array     : ");
    for(int i = 0; i < n; i++) 
        printf("%d ", destination[i]);
    
    printf("\n");
    
    return 0;
}