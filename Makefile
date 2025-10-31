# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -std=c11
LIBS = -lm    # link math library

DIR ?= .

SRC = $(wildcard $(DIR)/*.c)
TARGETS = $(notdir $(SRC:.c=))

all: $(TARGETS)

%: $(DIR)/%.c
	$(CC) $(CFLAGS) $< -o $@ $(LIBS)   # <-- MUST be a TAB here

clean:
	rm -f $(TARGETS)
