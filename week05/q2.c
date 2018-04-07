


typedef struct { int a; int b; } Item;

int isStableSort(int original[], int sorted[], int lo, int hi) { 
    i = 0;
    for (i=lo; i<hi-1; i++){
        if(sorted[i].a == sorted[i+1].a) {
            for (j=lo; j <hi; j++) {
                if(original[j].a == sorted[i].a) {
                    if (original[j].b != sorted[i].b) {
                        return FALSE;
                    }
                }
            }
        }
    }

    return TRUE;
}