#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Pre:
// - a[] is a valid pointer to the start of an array of ints
// - n is a positive int indicating how many elements in a[]
// Post:
// - return value = ∀ i ∈ {0..n-2} ( a[i] ≤ a[i+1] )
bool isSorted(int *a, int n)
{
    int isSorted = TRUE;
    int i = 0;
    while(i < n-1){
        if (n[i] > n[i+1]){
            isSorted = FALSE;
            break;
        }
    }
    i++;


}

int main (int argc, char *argv[]){
    return EXIT_SUCCESS;
}