SHELL	:=/bin/bash
CC	:=gcc
SRC	:=selection_sort.c
ELF	:=out/selection_sort.elf
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

	
