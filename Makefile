default: build

build:
	gcc main.c -o main -lncurses

run:
	./main

install_ncurses_ubuntu:
	sudo apt update && \
	sudo apt install libncurses5-dev libncursesw5-dev

uninstall_ncurses_ubuntu:
	sudo apt update && \
	sudo apt remove libncurses5-dev libncursesw5-dev
