#include<stdio.h>
#include<ncurses.h>
#include"./board/board.h"
#include"./food/food.h"

int main()
{
  ordered_pair new_food = return_food();
  initscr();
  curs_set(0);
  WINDOW *win = newwin(
    BOARD_HEIGHT,
    BOARD_WIDTH,
    Y_OFFSET,
    X_OFFSET
  );

  refresh();
  box(win, 0, 0);
  mvwaddch(win, new_food.x, new_food.y, 'X');
  wrefresh(win);
  getch();
  endwin();

  return 0;
}

