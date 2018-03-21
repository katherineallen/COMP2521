

// Read numbers from stdin and build a linked list of these numbers. 
 
#include <stdio.h>
#include <stdlib.h>
 
typedef struct n { int data; struct n * next; } Node;
typedef Node *List;
 
int main(int argc, char *argv[])
{
    int  n;           // current input number
    Node *new, *p;    // new=new Node, p=cursor
    List nums = NULL; // linked list

    //printf("starting function\n");
 
    // for each number
    while (scanf("%d",&n) == 1) {
        // build node for number
        new = malloc(sizeof(Node));
        if (new == NULL) {
            fprintf(stderr, "Out of memory\n"); exit(1);
        }

        //printf("before derefencing\n");
        new->data = n;
        new->next = NULL;
        //printf("after derefencing\n");

        //printf("p: %p\n", p);
        //printf("nums: %p\n", nums);

        if (nums == NULL) {
            nums = new;
        } else {
            // find last node and append new node onto list
            for (p = nums; p->next != NULL; p = p->next) {
                //printf("in for loop\n");
                /* scan */ ;
            }
            //printf("exiting for loop")
            p->next = new;
        }
    }

    //printf("read in numbers\n");
 
    // display contents of list
    printf("nums");
    for (p = nums; p != NULL; p = p->next)
        printf("->%d",p->data);
    printf("\n");
 
    return EXIT_SUCCESS;
}







