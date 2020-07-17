default: build

build:
	gcc main.c -lncurses -o main

run: build
	./main

install_ncurses_ubuntu:
	sudo apt update && \
	sudo apt install libncurses5-dev libncursesw5-dev

uninstall_ncurses_ubuntu:
	sudo apt update && \
	sudo apt remove libncurses5-dev libncursesw5-dev
