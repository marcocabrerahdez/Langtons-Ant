# Langtons-Ant
A two-dimensional universal Turing machine with a very simple set of rules but complex emergent behavior.

## Rules
Squares on a plane are colored variously either black or white. We arbitrarily identify one square as the "ant". The ant can travel in any of the four cardinal directions at each step it takes. The "ant" moves according to the rules below:

- At a white square, turn 90° counter-clockwise, flip the color of the square, move forward one unit.
- At a black square, turn 90° clockwise, flip the color of the square, move forward one unit.

## Modes of behavior
These simple rules lead to complex behavior. Three distinct modes of behavior are apparent, when starting on a completely white grid.
  1. Simplicity. During the first few hundred moves it creates very simple patterns which are often symmetric.
  2. Chaos. After a few hundred moves, a large, irregular pattern of black and white squares appears. The ant traces a pseudo-random path until around 10,000 steps
  3. Emergent order. Finally the ant starts building a recurrent "highway" pattern of 104 steps that repeats indefinitely

All finite initial configurations tested eventually converge to the same repetitive pattern, suggesting that the "highway" is an attractor of Langton's ant, but no
one has been able to prove that this is true for all such initial configurations. It is only known that the ant's trajectory is always unbounded regardless of the
initial configuration – this is known as the Cohen–Kong theorem.

### Compilation
`g++ -std=c++11 -g -Wall main.cpp Square.cpp Ant.cpp Board.cpp -o main`
