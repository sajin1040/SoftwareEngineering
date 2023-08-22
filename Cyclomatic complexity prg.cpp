#include <stdio.h>

int main() 
{
    int E, N, P, complexity;

    printf("Enter the number of edges (E): ");
    scanf("%d", &E);

    printf("Enter the number of nodes (N): ");
    scanf("%d", &N);

    printf("Enter the number of predicate nodes (P): ");
    scanf("%d", &P);

    complexity = E - N + P + 2;
    
    printf("Cyclomatic Complexity (V(G)) = %d\n", complexity);

    return 0;
}
