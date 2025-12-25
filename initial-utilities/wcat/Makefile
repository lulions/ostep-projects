CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g -O0
SRC = $(wildcard *.c)
OUT = main

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
