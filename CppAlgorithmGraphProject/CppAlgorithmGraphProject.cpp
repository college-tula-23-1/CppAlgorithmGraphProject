#include <iostream>

#include "adjacency_matrix.h"

int main()
{
    adjacency_matrix graph(5);

    graph.add_edge(2, 0);
    graph.add_edge(0, 4);
    graph.add_edge(3, 0);
    graph.add_edge(3, 4);
    graph.add_edge(2, 1);
    graph.add_edge(1, 3);
    
    std::cout << graph << "\n";

    std::cout << graph.add_vertex() << "\n\n";
    graph.add_edge(5, 1);
    graph.add_edge(2, 5);
    graph.add_edge(5, 4);

    std::cout << graph << "\n\n";

    std::cout << graph.remove_vertex(2) << "\n\n";

    std::cout << graph << "\n\n";
}
