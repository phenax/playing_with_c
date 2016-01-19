#include <stdio.h>

char board[3][3];
char player,winner;

void check_board() {
	char wins;
	wins= '-';

    for (int i = 0; i < 3; i++) {
      if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2])) {
        wins = board[i][0];
      }
    }

    for (int j = 0; j < 3; j++) {
      if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j])) {
        wins = board[0][j];
      }
    }

    if ((board[0][0] == board[1][1] &&
        board[1][1] == board[2][2]) ||
      (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])) {
      wins = board[1][1];
    }

    winner= wins;
}

void show_board() {
	for(int i= 0; i< 3; i++) {
		for(int j= 0; j< 3; j++) {
			printf("| %c |",board[i][j]);
		}

		printf("\n");
	}

	printf("\n");
}

void change_board(int row, int col) {
	if(board[row-1][col-1] == '-') {
		board[row-1][col-1]= player;
		player= (player == 'x')? 'o': 'x';
	}

	check_board();
}

void input_board() {
	int row,col;

	show_board();
	printf("Player %c\n", player);

	printf("Row num: ");
	scanf("%d",&row);

	printf("Col num: ");
	scanf("%d",&col);

	change_board(row,col);

	if(winner == '-') {
		input_board();
	} else {
		printf("~~~~ # Player %c wins # ~~~~~\n", winner);
	}
}

int main() {
	printf("\n## TicTacToe ## \n\n");

	winner= '-';
	player= 'x';

	for(int i= 0; i< 3; i++) {
		for(int j= 0; j< 3; j++) {
			board[i][j]= '-';
		}
	}

	input_board();

	return 0;
}