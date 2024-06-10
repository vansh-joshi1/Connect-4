#ifndef C4BOARD_H
#define C4BOARD_H


#include "C4Col.h"
#include <iostream>

class C4Board {
	
	private:
		int num_cols;
		C4Col board[7]; 
		char player; //X or O player signs	
	public:
		C4Board(); //default constructor
		void display();
		void play();
		int check_winner();
};
#endif
