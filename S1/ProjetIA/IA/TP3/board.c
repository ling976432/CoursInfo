#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include "board.h"

const move_t moves[MAX_BOARD] = {
 /* 0 */ { 2, {1, 3} },
 /* 1 */ { 3, {0, 2, 4} },
 /* 2 */ { 2, {1, 5} },
 /* 3 */ { 3, {0, 4, 6} },
 /* 4 */ { 4, {1, 3, 5, 7} },
 /* 5 */ { 3, {2, 4, 8} },
 /* 6 */ { 2, {3, 7} },
 /* 7 */ { 3, {4, 6, 8} },
 /* 8 */ { 2, {5, 7} } };
// Initialize a new Game for the nQueens problem: an empty board..
Item *initGame()
{

  int i;
  Item *node;

  char easy[MAX_BOARD] = {1, 2, 5, 3, 0, 4, 7, 8, 6};
  // char medium[MAX_BOARD] = {7, 4, 8, 2, 5, 6, 3, 1, 0};
  // node->blank=8;
  // char difficult[MAX_BOARD] = {8, 0, 7, 5, 6, 1, 3, 2, 4};
  // node->blank=1;
  initBoard(node,easy);
  node->blank = 4;
  return node;
}

// print a board
void printBoard(Item *node)
{
  assert(node);
  printf("\n");
  for (int j = 0; j < WH_BOARD; j++)
    if (j == 0)
      printf(" ___");
    else
      printf("____");
  printf("\n");
  for (int i = 0; i < MAX_BOARD; i++)
  {
    if (i % WH_BOARD == 0)
      printf("|");
    if (node->board[i] == 0)
      printf("   |");
    else
      printf("%2d |", node->board[i]);
    if (((i + 1) % WH_BOARD) == 0)
    {
      printf("\n");
      for (int j = 0; j < WH_BOARD; j++)
        if (j == 0)
          printf(" ___");
        else
          printf("____");
      printf("\n");
    }
  }
  printf("\n");
}

// initialize node's state from a given board
void initBoard(Item *node, char *board)
{
  assert(node);
  int i;

  node->size = MAX_BOARD;
  node->board = calloc(MAX_BOARD, sizeof(char));
  if (board != NULL)
  {
    for (i = 0; i < MAX_BOARD; i++)
    {
      node->board[i] = board[i];
    }
  }
}

/*for (i = 0; i < MAX_BOARD; i++)
  {
    node->board[i] = board[i];
  }*/

// Return nb if nb == 0
//
double evaluateBoard(Item *node)
{
  int nb = 9 ;
  if (node->board[MAX_BOARD - 1] == 0)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 2] == 8)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 3] == 7)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 4] == 6)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 5] == 5)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 6] == 4)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 7] == 3)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 8] == 2)
  {
    nb--;
  }
  if (node->board[MAX_BOARD - 9] == 1)
  {
    nb--;
  }
  return nb;
}

// Test if position pos is valid with respect to node's state
// nQueens -> not same row ; not same column ; not same diagonal
int isValidPosition(Item *node, int pos)
{

  // la reine a testé est en position node->board[ii][jj]

  for (int i = 0; i < WH_BOARD; i++)
  {
    if (node->board[i] == 0)
    {
      for (int j = 0; j < moves[i].len; j++)
      {
        if (pos == moves[i].valid[j])
        {
          return 1;
        }
      }
    }
  }
  return 0;
}

// Return a new item where a new queen is added at position pos if possible. NULL if not valid
Item *getChildBoard(Item *node, int pos)
{
  int Valueposprec;
  int posvalueprosprec;
  Item *child_p = NULL;

  if (isValidPosition(node, pos))
  {
    /* allocate and init child node */
    child_p = nodeAlloc();
    initBoard(child_p, node->board);
    /* Make move */

    for (int i = 0; i < MAX_BOARD; i++)
    {
      if (child_p->board[i] == 0)
      {
        posvalueprosprec = i;
      }
    }

    // swap
    Valueposprec = child_p->board[pos];
    child_p->board[pos] = 0;
    child_p->blank=pos;
    child_p->board[posvalueprosprec] = Valueposprec;

    /* link child to parent for backtrack */
    child_p->parent = node;

    /*incrémenter la profondeur de 1*/
    child_p->depth++;
  }

  return child_p;
}
