#include <stdio.h>

int main() {
	
int arr[] = {3, 7, 8, 9, 10};  
int n = 5;  
int i, j, temp;
int numTroca = 0;


    for (i = 0; i < n - 1; i++) {
        numTroca = 0; 

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
              
                temp = arr[j];        
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp;
                
                numTroca++; 
            }
        }

   
        if (numTroca == 0) {
            printf("O array ja esta ordenado.\n");
            break; 
        }
    }

   
    return 0;
}
