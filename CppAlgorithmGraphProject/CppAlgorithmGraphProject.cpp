#include <iostream>

#include "adjacency_matrix.h"
#include "adjacency_list.h"

int main()
{
    //adjacency_matrix graph(5);
    adjacency_list graph(5);

    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(0, 3);
    graph.add_edge(0, 4);
    graph.add_edge(2, 3);
    graph.add_edge(3, 4);
    
    std::cout << graph << "\n";

    
    graph.add_vertex();
    graph.add_edge(2, 5);
    graph.add_edge(3, 5);

    std::cout << graph << "\n";

    graph.remove_vertex(2);

    std::cout << graph << "\n";

}
