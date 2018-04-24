#define TRUE 1
#define FALSE 0


struct graphRep { 
    int nV;       // #vertices 
    int nE;       // #edges 
    Edge *edges;  // array of Edges
}; 


int isEulerPath(Graph g, Edge e[], int nE) {
    if (nE != g->nE) {
        return FALSE;
    }

    if (checkForDuplicates (e, nE) == TRUE) {
        return FALSE;
    }

    return TRUE;

}
