//Lab 2: Connect 4 - This program is a connect 4 game. It uses .h files and functions to make the game work. It take in user input and asigns either X or O to the players and can decide who the winner is. C4Board.cpp is the main file for the code. It has the code for the play and display functions and the check win functions. 

//Vansh Joshi
//02/06/2024

//Used Dr. Scott's notes for the display fuction 
//https://web.eecs.utk.edu/~semrich/cs202-24/labs/2/

//Used Ashley's video to start off the lab. Used for the .h files and how to check for wins
//https://www.youtube.com/watch?v=33AXH-e9s0Y

//Watch a youtube video to better understnad the logic of checking for wins
//https://www.youtube.com/watch?v=X4mWjuGxio0


#include "C4Board.h"   // class definition for C4Board used below

int main() {
  C4Board c4;   // instantiate an instance of a C4Board object
  c4.play();        // play game!!
	
}
