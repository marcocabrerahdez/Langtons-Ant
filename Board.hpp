#ifndef BOARD_HPP
#define BOARD_HPP


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
#include "Square.hpp"
#include "Ant.hpp"


class Board {
    public:
        Board(unsigned int, unsigned int);
        void moveAnt(int);
        void print(unsigned int, unsigned int);
        std::vector<std::vector<Square> > board;
        unsigned int row, col;

    private:
        Square* currentSquare;
        Ant ant;
        std::vector<char> direction = {'^', '>', 'v', '<'};
};

#endif