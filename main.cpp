/** 
 * University of La Laguna
 * Advanced Data Structures and Algorithms
 * Hormiga de Langton
 * @author Marco Antonio Cabrera Hernández
 * Contact: alu0101327372@ull.edu.es
 * Compilation: g++ -std=c++11 -g -Wall main.cpp Square.cpp Ant.cpp Board.cpp -o main
 */


#include "Square.hpp"
#include "Ant.hpp"
#include "Board.hpp"


int main(int argc, char** argv) {
    // Process command line arguments
    unsigned int x = std::stoi((argv[1]));
    unsigned int y = std::stoi((argv[2]));
    unsigned int num = std::stoi((argv[3]));

    // Create board object
    Board board(x, y);

    // Move ant
    board.moveAnt(num);

    return 0;
}
