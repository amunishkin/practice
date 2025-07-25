#ifndef LIFE_H
#define LIFE_H

const char live_cell{'X'};
const char dead_cell{' '};

// Standard ANSI console, with 1-char border
// Occupied rows go from 1 to 23
// Occupied cols go from 1 to 79
const int rowmax = 23;
const int colmax = 79;

// Conway's parameters
const int min_neighbors = 2;
const int max_neighbors = 3;
const int min_parents = 3;
const int max_parents = 3;

#endif // LIFE_H