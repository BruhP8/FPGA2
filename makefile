CC = gcc
CFLAGS = -Wall
OBJFILES = main.o fonctions_ES.o timers_b.o

all: neuralNetwork

neuralNetwork: $(OBJFILES)
	$(CC) $(CFLAGS) -pg $^ -lm -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

timers_b.c: timers_b.h

clean:
	rm -f *.o neuralNetwork

.PHONY: all clean
