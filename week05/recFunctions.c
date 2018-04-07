#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void countFrom(int n);
//int factorial(int n);
int recMult(int a, int b);

int main (int argc, char *argv[]){

    countFrom(5);
    countFrom(1);
    countFrom(0);
    /*
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(4) == 24);
    assert(factorial(10) == 3628800);*/

    assert(recMult(1,1) == 1);
    assert(recMult(5,4) == 20);
    assert(recMult(56,1) == 56);
    assert(recMult(1,56) == 56);

    return EXIT_SUCCESS;
}
/*
//calculate n!
int factorial(int n) {

}*/


// given 5, should print 5 4 3 2 1
// given 1, should print 1
// given 0, should print nothing
void countFrom(int n) {
    if (n > 0){ 
        printf("%d ",n);
        countFrom(n-1);
    }
    else{
        printf("\n");
    }


}


//write a function to compute a*b, using only + and -
//try for a>0, b>0 first, then allow negative numbers
int recMult(int a, int b) {
    if (b == 1){
        return a;
    }
    else {
        return a + recMult(a, b-1);
    }
}












