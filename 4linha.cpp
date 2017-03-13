#include <stdlib.h>
#include <iostream>

using namespace std;

#define player_pc 'x'
#define player_h 'o'

char board[6][7] =
  {
    { '-', '-', '-', '-', '-', '-', '-'},
    { '-', '-', '-', '-', '-', '-', '-'},
    { '-', '-', '-', '-', '-', '-', '-'},
    { '-', '-', '-', '-', '-', '-', '-'}, 
    { '-', '-', '-', '-', '-', '-', '-'},
    { '-', '-', '-', '-', '-', '-', '-'}
  };

void read(int coluna, char player)
{
  int linha =0;
  while(board[linha][coluna] != 'x' && board[linha][coluna] != 'o' && linha <5 )
    {
      linha++;
    }
  board[linha][coluna] = player;
}

void jogadax2()
{
  int coluna = 0;
  cout << " dá posição coluna entre 0-6 (inclusive) onde jogar " << endl;
  cin >> coluna;
  if(coluna < 0 || coluna >7)
    {
      cout << " posição invalida " << endl;
      return ;
    }
  read(coluna, player_pc);
}

void print()
{
  for (int i=0; i<6; i++)
    {
      for (int j=0; j<7; j++)
	{
	  cout << board[i][j];
	}
      cout << endl;
    }
}

int coluna_jogavel(char mat[][7], int c)
{
  int l=0, flag=0,linha=0;
  while ( (mat[l][c] != 'x' || mat[l][c] != 'o') && linha<5)
    {
      l++;
      flag = 1;
    }
  if(flag == 1)
    {
  return l;

    }

char descententes(char mat[][7], int coluna, char vez)
{
  if(coluna_jogavel(mat)=!-1)
    {
      for (int i=coluna; i<7; i++)
	{
	  char turn;
	  if(vez == player_pc)
	    {
	      turn = player_h;
	    }
	  else
	    {
	      turn = player_pc;
	    }
	  descendentes(mat, i, turn);
	}
    }
}
/*}
 else
   return;
*/
/*

int minimax(char [][7])
{
  
}*/

int main(){

  jogadax2();
  print();
}
  
