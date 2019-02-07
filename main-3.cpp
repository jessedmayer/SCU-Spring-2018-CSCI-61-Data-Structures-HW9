#include <iostream>
#include "puzzle_graph.h"
#include <map>

using namespace std;



int main() {
    puzzle_graph g = puzzle_graph();

    g.print_path("black","white");
    g.print_path("tears","smile");
    g.print_path("small","giant");
    g.print_path("stone","money");
    g.print_path("angel","devil");
    g.print_path("amino","right");
    g.print_path("amigo","signs");


    return 0;
}