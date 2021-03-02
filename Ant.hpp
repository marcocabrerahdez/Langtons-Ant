#ifndef ANT_HPP
#define ANT_HPP


/** 
 * University of La Laguna
 * Advanced Data Structures and Algorithms
 * Hormiga de Langton
 * @author Marco Antonio Cabrera Hernández
 * Contact: alu0101327372@ull.edu.es
 * Compilation: g++ -std=c++11 -g -Wall main.cpp Square.cpp Ant.cpp Board.cpp -o main
 */


#include <iostream>
#include <vector>
#include <string>
#include "Square.hpp"

enum Direction {NORTH, EAST, SOUTH, WEST};


class Ant {
    public:
        Ant(unsigned int, unsigned int);
        Ant();
        Direction getDirection();
        unsigned int getXcoord();
        unsigned int getYcoord();
        void move(Square*);
        void checkBoard();
    
    private:
        unsigned int xCoord, yCoord, row, col;
        Direction dir;
};
#endif