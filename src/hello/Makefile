all: hello

.PHONY: clean
clean:
	rm *.o *.sfc

hello: main.s
	ca65 main.s
	ld65 -C ../../cfg/lorom128K.cfg -o hello.sfc main.o
