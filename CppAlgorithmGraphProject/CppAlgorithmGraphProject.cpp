#include <iostream>

#include "adjacency_matrix.h"

int main()
{
    adjacency_matrix graph({ "a", "bb", "ccc", "d", "e" });

    graph.add_edge("ccc", 0);
    graph.add_edge(0, 4);
    graph.add_edge("d", 0);
    graph.add_edge(3, "e");
    graph.add_edge("ccc", "bb");
    graph.add_edge(1, 3);
    
    std::cout << graph << "\n";

    std::cout << graph.add_vertex("ff") << "\n\n";
    graph.add_edge(5, 1);
    graph.add_edge(2, 5);
    graph.add_edge("ff", 4);

    std::cout << graph << "\n\n";

    std::cout << graph.remove_vertex("d") << "\n\n";

    std::cout << graph << "\n\n";
}
