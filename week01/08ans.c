#include <stdlib.h>

typedef struct _Node {
	int value;
	struct _Node *next;
} Node;

typedef Node *List;  // pointer to first Node

int main (int argc, char*argv[]){
	return EXIT_SUCCESS;
}

int sumOfListWhile(List list) {
	Node *curr = list;
	int sum = 0;

	while (curr != NULL) {
		sum += curr -> value;
		curr = curr -> next;
	}

	return sum;
}



int sumOfListFor(List list) {
	Node *curr;
	int sum = 0;

	for (curr = list; curr != NULL; curr = curr -> next) {
		sum += curr -> value;
	}

	return sum;
}



int sumOfListRecursive(List list) {

	if (list == NULL) {
		return 0;
	} else {
		return list->value + sumOfListRecursive(list->next);
	}

}