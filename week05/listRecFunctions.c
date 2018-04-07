#include <stdio.h>
#include <stdlib.h>

typedef struct _node*node;

struct _node {
   node next;
   int value;
};

void showList(node toShow);
void deleteLast(node from, node prev);
void deleteAll(node l);

int main(int argc, char* argv[]){
    node new = NULL;
    showList(new);
    new = malloc(sizeof(struct _node));
    new -> value = 5;
    new -> next = NULL;
    showList(new);
    new -> next = malloc(sizeof(struct _node));
    new -> next -> value = 7;
    new -> next -> next = malloc(sizeof(struct _node));
    new -> next -> next -> value = 1;
    new -> next -> next -> next = malloc(sizeof(struct _node));
    new -> next -> next -> next -> value = 4;
    new -> next -> next -> next -> next = malloc(sizeof(struct _node));
    new -> next -> next -> next -> next -> value = 2;
    new -> next -> next -> next -> next -> next = NULL;
    showList(new);
    deleteLast(new, NULL);
    showList(new);
    deleteAll(new);
    return EXIT_SUCCESS;
}

void showList(node l) {
    
}

void deleteLast(node l, node prev) {
    
}

void deleteAll(node l) {
    
}