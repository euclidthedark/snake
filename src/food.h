#include<stdlib.h>
#include"board.h"
#include"ordered_pair.h"

Ordered_Pair return_food() {
  int x = (rand() % BOARD_HEIGHT) + Y_OFFSET;
  int y = (rand() % BOARD_WIDTH) + X_OFFSET;

  Ordered_Pair new_food = {x, y};
  
  return new_food;
}

