

Set breadthFirst(Graph g, Vertex v, Set s)
{
   int *visited = calloc(g->nV,sizeof(int));
   Queue q = newQueue();
   QueueJoin(q, v);
   while (QueueLength(q) > 0) {
      Vertex y, x = QueueLeave(q);
      if (visited[x]) continue;
      visited[x] = 1;
      s.setInclude(v);
      for (y = 0; y < g->nV; y++) {
         if (!g->edges[x][y]) continue;
         if (!visited[y]) QueueJoin(q,y);
      }  
   }
}

Set reachable(Graph g, Vertex v) { 

   Set s = newSet();

   s = breadthFirst(g, v, s);


}


