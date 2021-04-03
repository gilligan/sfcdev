all: green

green: main.s
	ca65 main.s
	ld65 -C ../../cfg/lorom128K.cfg -o green.sfc main.o
