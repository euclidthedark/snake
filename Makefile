default: run

build:
	rm -rf bin
	mkdir bin
	gcc ./src/main.c ./src/food/food.c -o ./bin/snake -lncurses

run: build
	./bin/snake
	rm -rf bin

install_ncurses_ubuntu:
	sudo apt update && \
	sudo apt install libncurses5-dev libncursesw5-dev

uninstall_ncurses_ubuntu:
	sudo apt update && \
	sudo apt remove libncurses5-dev libncursesw5-dev
