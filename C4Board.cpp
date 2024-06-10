// Lab 2 - Connect 4. This is the main part of the lab where we decide the players turn, how to check the winner, and to display the board. It is also where is user experience is made and gets their inputs.
// Vansh Joshi

#include "C4Board.h"
#include "C4Col.h"
#include <iostream>
using namespace std;

C4Board::C4Board() {
	num_cols = 7;

}

// displays the board design
void C4Board::display() {
	for (int i = board[0].getMaxDiscs() - 1; i >= 0; i--) {
		cout << '|';

		for (int j = 0; j < num_cols; j++) 
			cout << board[j].getDisc(i) << "|";

		cout << endl;
	}
}

void C4Board::play() {

	player = 'X';
	int turn = 1;
	int column = 0;
	
	//42 plays on the board
	while (turn <= 42) {
		if (turn % 2 == 0) {
			player = 'O';
		} else {
			player = 'X';
		}
	
		//shows the board
		display();
	
		cout << "Player " << player << " choose a column between 0 and 6: ";
		cin >> column;
		
		//check to make sure the column is on the board
		while (column > 6 || column < 0) {
			cout << "Please chooose a column that is on the board: ";
			cin >> column;
		}

		
		//checks to see if the column is full 
		while (board[column].isFull()) {
			cout << "This column is full. Choose another column: ";
			cin >>  column;
		}
		
		//adds the players move the to the board
		board[column].addDisc(player);
	
		if (check_winner()) {
			display();

			cout << "Player " << player << " has won the game!" << endl;
			return;
		}

		turn++;
	
	}
		//If none of the checks pass then it is a tie and will show the final board
		display();
		cout << "It is a tie!" << endl;
}

int C4Board::check_winner() {
	
	//used to check wins separately
	int V_run;
	int H_run;
	
	//check for horizontal wins
	for (int i = 0; i < board[0].getMaxDiscs(); i++) {
		H_run = 0;
		
		for (int j = 0; j < num_cols; j++) {
			
			//checks for the same disc
			if (board[j].getDisc(i) == player) {
					H_run++;
			} else {
				H_run = 0;
			}
			if (H_run == 4) {
				return 1;
			}
		}
	}
  
	//check for vertical wins (same logic as horizontal just flip the loops)
	for (int i = 0; i < num_cols; i++) {
        V_run = 0;

        for (int j = 0; j < board[0].getMaxDiscs(); j++) {
            if (board[i].getDisc(j) == player) {
                    V_run++;
            } else {
                V_run = 0;
            }
            if (V_run == 4) {
                return 1;
            }
        }
    }
	
	//check for right diagonal wins 
	for (int i = 0; i < num_cols - 3; i++) {
		for (int j = 0; j < board[0].getMaxDiscs() - 3; j++) {
			if(board[i].getDisc(j) == player && board[i + 1].getDisc(j + 1) == player && board[i + 2].getDisc(j + 2) == player && board[i + 3].getDisc(j + 3) == player) {
			return 1;
			}
		}
	}
	
	//check for left diagonal wins
	 for (int i = 0; i < num_cols - 3; i++) {
        for (int j = 0; j < board[0].getMaxDiscs(); j++) {
            if(board[i].getDisc(j) == player && board[i + 1].getDisc(j - 1) == player && board[i + 2].getDisc(j - 2) == player && board[i + 3].getDisc(j - 3) == player) {
            return 1;
            }
        }
    }


	return 0;
}


