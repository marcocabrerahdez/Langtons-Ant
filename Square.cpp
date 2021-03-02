/** 
 * University of La Laguna
 * Advanced Data Structures and Algorithms
 * Hormiga de Langton
 * @author Marco Antonio Cabrera Hernández
 * Contact: alu0101327372@ull.edu.es
 * Compilation: g++ -std=c++11 -g -Wall main.cpp Square.cpp Ant.cpp Board.cpp -o main
 */


#include "Square.hpp"
#include <iostream>
#include <string>


Square::Square() {
    color = WHITE;
    return;
}



// Return square color
colorSquare
Square::getColor() {
    return color;
}



// Change square color
void
Square::changeColor() {
    if (color == WHITE)
        color = BLACK;

    else 
        color = WHITE;
}



// Return square color (char)
char
Square::getCharColor() {
    if (color == WHITE)
        return ' ';

    else
        return 'x';
}