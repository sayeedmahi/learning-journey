# Central Makefile for all problem folders

CC = cc
CFLAGS = -Wall -Wextra -std=c11
LIBS = -lm

# Folder containing .c files (pass via DIR=...)
DIR ?= .

SRC = $(wildcard $(DIR)/*.c)
TARGETS = $(notdir $(SRC:.c=))

.PHONY: all clean

all: $(TARGETS)

%:
	$(CC) $(CFLAGS) $(DIR)/$@.c -o $(DIR)/$@ $(LIBS)

clean:
	rm -f $(addprefix $(DIR)/,$(TARGETS))
