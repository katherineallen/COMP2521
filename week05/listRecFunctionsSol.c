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
    if (l == NULL){
        printf("Empty List\n");
    } else if (l->next == NULL){
        printf("%d->NULL\n", l->value);
    } else {
        printf("%d->", l->value);
        showList(l->next);
    }
}

void deleteLast(node l, node prev) {
    if (l == NULL) {
        return;
    } else if (l -> next == NULL) {
        if (prev == NULL) { //this is the only node in the list
            free(l);
        }
        prev -> next = NULL;
        free(l);
    } else {
        deleteLast(l -> next, l);
    }
}

void deleteAll(node l) {
    printf("starting deleteAll\n");
    if (l==NULL) {
        printf("l is %p\n", l);
        return;
    } else {
        node next = l->next;
        printf("freeing %p\n", l);
        free(l);
        deleteAll(next);
    }
}