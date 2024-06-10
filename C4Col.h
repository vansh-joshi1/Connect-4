#ifndef C4COL_H
#define C4COL_H


#include <iostream>

class C4Col {

	private:
		int num_discs;
		int max_discs;
		char disc_arr[6];
	

	public:
		C4Col(); //default constructor
		int isFull(); //returns whether a column is full
		char getDisc(int); //given a position return the disc at that postition (between 0 and 5)
		int getMaxDiscs(); //returns max_discs
		void addDisc(char); //adds that character to the top of the column

};
#endif
