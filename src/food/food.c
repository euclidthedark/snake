#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"./food.h"

ordered_pair return_food()
{
  srand(time(0));
  int x = (rand() % BOARD_HEIGHT) + Y_OFFSET;
  int y = (rand() % BOARD_WIDTH) + X_OFFSET;

  ordered_pair food = {x, y};
  
  return food;
}

