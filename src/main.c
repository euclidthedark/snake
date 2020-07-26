#include "board.h"
#include<ncurses.h>

int main()
{
  Board game_board = {200, 55};

  initscr();
  curs_set(0);
  WINDOW *win = newwin(game_board.height, game_board.width, 2, 10);
  refresh();
  box(win, 0, 0);
  wrefresh(win);
  getch();
  endwin();

  return 0;
}
