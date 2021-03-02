/** 
 * University of La Laguna
 * Advanced Data Structures and Algorithms
 * Hormiga de Langton
 * @author Marco Antonio Cabrera Hernández
 * Contact: alu0101327372@ull.edu.es
 * Compilation: g++ -std=c++11 -g -Wall main.cpp Square.cpp Ant.cpp Board.cpp -o main
 */


#include "Ant.hpp"


// Ant constructor
Ant::Ant(unsigned int x, unsigned int y) {
    // Inicialize Ant's in the center of tbe board
    xCoord = x / 2;
    yCoord = y / 2;

    // Inicialize Ant's direction
    dir = EAST;

    // Inicialize board's size
    row = x;
    col = y;
}



// Constructor
Ant::Ant() {
    xCoord = 0;
    yCoord = 0;
    dir = EAST;
    row = 0;
    col = 0;
}



// Return current direction
Direction
Ant::getDirection() {
    return dir;
}



// Return x coord
unsigned int
Ant::getXcoord() {
    return xCoord;
}



// Return y coord
unsigned int
Ant::getYcoord() {
    return yCoord;
}



// Check the boarder of the board
void
Ant::checkBoard() {
    if (xCoord > row)
        xCoord = row - 1;

    else if (xCoord > row - 1)
        xCoord = 0;

    if (yCoord > col)
        yCoord = col - 1;

    else if (yCoord > col - 1)
        yCoord = 0;
}



// Movw the ant 
void
Ant::move(Square* square) {
    switch (dir) {
        case NORTH:
            if (square->getCharColor() == 'x') {
                square->changeColor();
                dir = EAST;
                yCoord++; 
                checkBoard();
            }

            else {
                square->changeColor();
                dir = WEST;
                yCoord--;
                checkBoard();
            }
        break;
        
        case EAST:
            if (square->getCharColor() == 'x') {
                square->changeColor();
                dir = SOUTH;
                xCoord++;
                checkBoard();
            }

            else {
                square->changeColor();
                dir = NORTH;        
                xCoord--;
                checkBoard();
            }    
        break;
        
        case SOUTH:
            if (square->getCharColor() == 'x') {
                square->changeColor();
                dir = WEST;
                yCoord--;
                checkBoard();
            }

            else {
                square->changeColor();
                dir = EAST;
                yCoord++; 
                checkBoard();
            }
        break;
        
        case WEST:
            if (square->getCharColor() == 'x') {
                square->changeColor();
                dir = NORTH;
                xCoord--;
                checkBoard();
            }

            else {
                square->changeColor();
                dir = SOUTH;
                xCoord++;
                checkBoard();
            }
        break;

    default:
        break;
    }
}