#ifndef SQUARE_HPP
#define SQUARE_HPP


/** 
 * University of La Laguna
 * Advanced Data Structures and Algorithms
 * Hormiga de Langton
 * @author Marco Antonio Cabrera Hernández
 * Contact: alu0101327372@ull.edu.es
 * Compilation: g++ -std=c++11 -g -Wall main.cpp Square.cpp Ant.cpp Board.cpp -o main
 */


#include <iostream>
#include <algorithm>

enum colorSquare {WHITE, BLACK};

class Square {
    public:
        Square();
        colorSquare getColor();
        void changeColor();
        char getCharColor();

    private:
        colorSquare color;
};
#endif