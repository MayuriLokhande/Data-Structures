SHELL	:=/bin/bash
CC	:=gcc
SRC	:=insertion_sort.c
ELF	:=out/insertion_sort.elf
OBJ	:=$(SRC:.c=.o)
OBJ	:=$(addprefix out/,$(OBJ))
CFLAGS	:=-Wall -Werror -Os

default: $(ELF)

$(ELF): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

.SECONDEXPANSION:
out/%.o: %.c | $$(@D)/
	$(CC) -c $(CFLAGS) $< -o $@

out/:
	mkdir -p $@

clean:
	rm -rf out/

	
