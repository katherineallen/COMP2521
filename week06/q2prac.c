// Node
typedef struct _node {
  int value;
  struct _node *next;
  struct _node *prev;
} node;
typedef node *Node;

// List
typedef struct _list {
  Node head;
  Node tail;
  Node curr;
  int nitems;
} list;
typedef list *List;

int main (int argc, char*argv){
    


}

List getPeaks(List L){
    List peaks = newList();
    
    if(nitems <= 2){
        return peaks;
    }

    Node prev = L->head;
    Node curr = L->head->next;
    Node next = L->head->next->next;

    while (next != null){

        if(curr->value > prev->value && curr->value > next->value){
            insertNode(peaks, curr->value);
        }

        prev = prev->next;
        curr = curr->next;
        next = next->next;
    }
}

List insertNode(List L, int value){

    Node new = malloc(sizeof(struct _node));

    new ->value = value;
    if(L->nitems == 0){
        L->head = new;
        L->tail = new;
    } else {
        L->tail->next = new;
        new->prev = L->tail;
        L->tail = new;
    }

    new->next = NULL;
    L->nitems += 1;

}