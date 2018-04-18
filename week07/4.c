


///// Adjacency matrix graph representation
 

 
///// Adjacency list graph representation
 
struct graphRep { 
    int nV;       // #vertices 
    int nE;       // #edges
    List *edges;  // array of Vertex lists 
};
//adjacency list
Edge *edges(Graph g, int *nE) { 
    *nE = g->nE;
    Edge* edges = malloc(sizeof(struct edge)*(g->nE));
    int numEdgesFound = 0;
    int i = 0;
    for (i=0; i<g->nV, i++){
        node curr = g->edges[i];
        if (node->value > i){
            edges[numEdgesFound].v = i;
            edges[numEdgesFound].w = node->value;
            numEdgesFound++;
        }
    }


}

typedef struct edge Edge;

// edges are pairs of vertices (end-points) 
struct edge { Vertex v; Vertex w; };

struct graphRep { 
    int nV;       // #vertices 
    int nE;       // #edges 
    int **edges;  // matrix of booleans (0 or 1)
}; 

//adjacency matrix
Edge *edges(Graph g, int *nE) { 
    *nE = g->nE;
    int i = 0;
    int j = 0;
    Edge* edges = malloc(sizeof(struct edge)*(g->nE));
    int numEdgesFound = 0;
    for (j=0; j<g->nV; j++){
        for (i=j; i<g->nV; i++){
            if (g->edges[i][j] == 1){
                if(i<j){
                    edges[numEdgesFound].v = i;
                    edges[numEdgesFound].w = j;
                } else {
                    edges[numEdgesFound].w = i;
                    edges[numEdgesFound].v = j;
                }
                numEdgesFound++;
            }
        }
    }
}



















