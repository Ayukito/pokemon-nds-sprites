
CC=clang

rip: rip.c
	$(CC) -std=c99 -o $@ $< -O2 -lpng -Wall
