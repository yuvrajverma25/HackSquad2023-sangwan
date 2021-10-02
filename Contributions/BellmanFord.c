#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
 
struct Edg
{

    int source, dest, weight;
};
 

struct Graph
{
    int V, E;

 
    struct Edg* edge;

};
 
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph));

 
    graph->V = V;   
    graph->E = E;
 
    graph->edge = (struct Edg*) malloc( graph->E * sizeof( struct Edg ) );

 
    return graph;
}
 
void Output(int dist[], int n)
{

    printf("\nVertex\tDistance from Source\n");
    int i;
 
    for (i = 0; i < n; ++i){
printf("%d \t\t %d\n", i, dist[i]);
}
}
 
void BellmanFord(struct Graph* graph, int source)
{
    int V = graph->V;
 
    int E = graph->E;
 
    int Store[V];
 
    int i,j;
 
    
    for (i = 0; i < V; i++)
        Store[i] = INT_MAX;
 
    Store[source] = 0;
 
    
    for (i = 1; i <= V-1; i++)
    {
        for (j = 0; j < E; j++)
        {
            int u = graph->edge[j].source;
 
            int v = graph->edge[j].dest;
 
            int weight = graph->edge[j].weight;
 
            if (Store[u] + weight < Store[v])
                Store[v] = Store[u] + weight;
        }
    }
 
    
    for (i = 0; i < E; i++)
    {
        int u = graph->edge[i].source;
 
        int v = graph->edge[i].dest;
 
        int weight = graph->edge[i].weight;
 
        if (Store[u] + weight < Store[v])
            printf("Yes,contains negative cycle\n");
    }
 
    Output(Store, V);
 
    return;
}
 
int main()
{
    int V,E,S;  
 
printf("Number of vertices in graph\n");
    scanf("%d",&V);
 
printf("Number of edges in graph\n");
    scanf("%d",&E);
 
printf("Enter the source vertex\n");
scanf("%d",&S);
 
    struct Graph* graph = createGraph(V, E);   
 
    int i;
    for(i=0;i<E;i++){
        printf("\nEnter edge %d properties Source, destination, weight resp\n",i+1);
        scanf("%d",&graph->edge[i].source);
        scanf("%d",&graph->edge[i].dest);
        scanf("%d",&graph->edge[i].weight);
    }
 
    BellmanFord(graph, S);

 
    return 0;
}

