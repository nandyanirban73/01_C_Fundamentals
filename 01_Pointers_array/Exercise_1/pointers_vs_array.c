// Write a C program that:
// Declares an integer array of size 5
// Uses only pointer arithmetic (no []) to:
// Read values from the user
// Print the values in reverse order

#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    for(int i = size-1; i >=0; i--){
        printf("\n%d-element : %d",i+1,(*(arr+i)));
    }
    
    return 0;
}