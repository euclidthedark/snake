#include "board.h"
#include<ncurses.h>

int main()
{
  Board game_board = {200, 55, 2, 10};

  initscr();
  curs_set(0);
  WINDOW *win = newwin(
    game_board.height,
    game_board.width,
    game_board.y_offset,
    game_board.x_offset
  );
  refresh();
  box(win, 0, 0);
  wrefresh(win);
  getch();
  endwin();

  return 0;
}
