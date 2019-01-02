// Game Tictactoe
//

#include <iostream>
#include <conio.h>
using namespace std;

char player1[50];
char player2[50];
char square[3][3] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
char previoussquare[3][3] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
char n = 'y';

void input();
void board();
void play();
int checkwin();
void newgame();

int main()
{
	int select;
	cout << "Tictactoe game" << endl
		 << "SELECT YOUR MODE (1 - PLAY GAME, OTHERS - EXIT GAME): ";
	cin >> select;
	
	if (select==1)
	{
		do
		{
			play();
			cout << "Do you want to continue (y/ n)?: ";
			cin >> n;
			newgame();
		} while (n == 'y');
	}
	else
	{
	}
	system("pause");
	return 0;
}

void input()
{
	cout << "Enter Player 1 Name: ";
	cin >> player1;
	cout << "\nEnter Player 2 Name: ";
	cin >> player2;
}

void board()
{
	system("cls");
	cout << "\nTicTacToe\n";
	cout << player1 << " - " << player2 << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << square[i][j] << " | ";
		}
		cout << endl<<"------------"<<endl;		
	}
}

void play()
{
	input();
	board();
	int player = 1;
	int choice, row, column;
	int count = 0;
	
	char mark;
	do
	{
		board();
		player = (player % 2) ? 1 : 2;
		cout << "Enter a number: ";
		cin >> choice;
		row = choice / 10;
		column = choice % 10;
		mark = (player == 1) ? 'X' : 'O';


		if (square[row][column]==square[0][0])
		{
			if (square[0][0] != 'X' && square[0][0] != 'O')
			{
				square[0][0] = mark;
				player++;
				count ++;
			}
		}
		else if (square[row][column] == square[0][1])
		{
			if (square[0][1] != 'X' && square[0][1] != 'O')
			{
				square[0][1] = mark;
				player++;
				count ++;				
			}
		}
		else if (square[row][column] == square[0][2])
		{
			if (square[0][2] != 'X' && square[0][2] != 'O')
			{
				square[0][2] = mark;
				player++;
				count ++;
			}
		}
		else if (square[row][column] == square[1][0])
		{
			if (square[1][0] != 'X' && square[1][0] != 'O')
			{
				square[1][0] = mark;
				player++;
				count ++;
			}
		}
		else if (square[row][column] == square[1][1])
		{
			if (square[1][1] != 'X' && square[1][1] != 'O')
			{
				square[1][1] = mark;
				player++;
				count ++;
			}
		}
		else if (square[row][column] == square[1][2])
		{
			if (square[1][2] != 'X' && square[1][2] != 'O')
			{
				square[1][2] = mark;
				player++;
				count ++;
			}
		}
		else if (square[row][column] == square[2][0])
		{
			if (square[2][0] != 'X' && square[2][0] != 'O')
			{
				square[2][0] = mark;
				player++;
				count ++;
			}
		}
		else if (square[row][column] == square[2][1])
		{
			if (square[2][1] != 'X' && square[2][1] != 'O')
			{
				square[2][1] = mark;
				player++;
				count ++;
			}
		}
		else if (square[row][column] == square[2][2])
		{
			if (square[2][2] != 'X' && square[2][2] != 'O')
			{
				square[2][2] = mark;
				player++;
				count ++;
			}
		}
		board();
		if (checkwin() == 1)
		{
			cout << player1 << " win" << endl;
		}
		else if (checkwin() == 2)
		{
			cout << player2 << " win" << endl;
		}
		else
		{
			cout << "Game draw" << endl;
		}
	} while (checkwin()==-1);

}

int checkWin()
{
	for (int i = 0; i < 3; i++)
	{
		if (Matrix[i][0] == Matrix[i][1] && Matrix[i][1] == Matrix[i][2])
		{
			if (Matrix[i][0] == 'X')
				return 1;
			else
				return 2;
		}
		if (Matrix[0][i] == Matrix[1][i] && Matrix[1][i] == Matrix[2][i])
		{
			if (Matrix[0][i] == 'X')
				return 1;
			else
				return 2;
		}

		if (Matrix[0][0] == Matrix[1][1] && Matrix[1][1] == Matrix[2][2])
		{
			if (Matrix[0][0] == 'X')
				return 1;
			else
				return 2;
		}
		if (Matrix[0][2] == Matrix[1][1] && Matrix[1][1] == Matrix[2][0])
		{
			if (Matrix[0][2] == 'X')
				return 1;
			else
				return 2;
		}
	}
}

void choice()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << " | " << Matrix[i][j];
		cout << "\n ------------\n";
	}
}


void newgame()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			square[i][j] = previoussquare[i][j];
		}
		cout << endl;
	}
}
