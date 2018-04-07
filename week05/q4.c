

typedef struct _node*node;

struct _node {
   node next;
   int value;
};


/*Write a version of selection sort that builds a new sorted list from an 
original unsorted linked list. The original list should not 
be modified during the sorting. Use the definition for linked lists from above*/
List selectSort(List ls) { 
    node new = newNode();
    node curr;
    int prevInserted = 0;

    for(i=0; i<length(ls); i++) {
        int currMin = INT_MAX;
        for(curr = ls; curr->next != null; curr = curr->next) {
            if (curr->value < currMin && curr->value > prevInserted) {
                currMin = curr->value;
            }
        }

        prevInserted = currMin;
        new -> value = currMin;
        new -> next = newNode();
    }
}









