/** 
 * University of La Laguna
 * Advanced Data Structures and Algorithms
 * Hormiga de Langton
 * @author Marco Antonio Cabrera Hernández
 * Contact: alu0101327372@ull.edu.es
 * Compilation: g++ -std=c++11 -g -Wall main.cpp Square.cpp Ant.cpp Board.cpp -o main
 */


#include "Board.hpp"

// Board constructor
Board::Board(unsigned int x, unsigned int y) {
    // Incializar el Mundo
    board.resize(x * y);
    for (unsigned int i = 0; i < (x * y); i++)
        board[i].resize(x * y);

    // Inicialize board's size
    row = x;
    col = y;

    // Inicialize Ant's square
    currentSquare = &(board[x / 2][y / 2]);

    // Inicialize Ant
    Ant* antSquare = new Ant(x, y);
    ant = *antSquare;
    std::free(antSquare);
}



// Print Langton's Ant
void
Board::print(unsigned int x, unsigned int y) {
    std::cout << "La hormiga está en la posición [" << ant.getXcoord() << ", " 
    << ant.getYcoord() << "]" << std::endl;
    
    for (unsigned int i = 1; i <= x; i++) {
        for (unsigned int j = 1; j <= y; j++) {
            if (i == ant.getXcoord() && j == ant.getYcoord())
                std::cout << direction[ant.getDirection()];

            else 
                std::cout << board[i][j].getCharColor();
        }
        std::cout << std::endl;
    }
}



// Define Ant's movement
void
Board::moveAnt(int steps) {
    // Print inicial board
    print(row, col);
    for (int i = 1; i <= steps; i++) {
        std::cout << "Paso número " << i << std::endl;
        ant.move(currentSquare);
        currentSquare = &(board[ant.getXcoord()][ant.getYcoord()]); // Actualiza la posición
        print(row, col);
    }
}