#include "C4Col.h"
#include <iostream>
using namespace std;

C4Col::C4Col(){

	num_discs = 0;
	max_discs = 6;
	
	//initializes the columns
	for (int i = 0; i < max_discs; i++) {
		disc_arr[i] = ' ';

	}
}

//check to see if columns are full
int C4Col::isFull() {
	if (num_discs == max_discs) {
		return 1;
	} else {
		return 0;
	}
}

//gets the position of the disc
char C4Col::getDisc(int position) {
	if (position >= 0 && position < 6) {
		return disc_arr[position];
	} else {
		return 0;
	}

}

int C4Col::getMaxDiscs() {
	return max_discs;
}

//adds the disc to the board, and makes sure it is X or O
void C4Col::addDisc(char newDisc) {

	if (newDisc == 'X' || newDisc == 'O') {
		disc_arr[num_discs++] = newDisc;
	} else {
		cout << "Please enter 'X' or 'O'" << endl;
		return;
	}

}

