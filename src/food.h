#include<stdlib.h>
#include"board.h"
#include"ordered_pair.h"

ordered_pair return_food()
{
  int x = (rand() % BOARD_HEIGHT) + Y_OFFSET;
  int y = (rand() % BOARD_WIDTH) + X_OFFSET;

  ordered_pair food = {x, y};
  
  return food;
}

