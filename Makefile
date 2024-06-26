##
## EPITECH PROJECT, 2022
## make
## File description:
## desc
##

SRC = \
	src/list_add.c \
	src/list_new.c \
	src/list_remove.c \
	src/list_get.c \
	src/list_free.c \
	src/list_clear.c \

OBJ = $(SRC:.c=.o)

GCC = gcc

INCLUDE_FLAGS = \
	-I include

C_WARNING_FLAGS = -Wextra -Wall -g
C_FLAGS = $(C_WARNING_FLAGS) $(INCLUDE_FLAGS) $(LIB_FLAGS)

.c.o:
	@echo "$(notdir $(CURDIR)): C '$<'"
	@$(GCC) $(C_FLAGS) -c -o $*.o $<

all: simple_list.a
.PHONY : all

simple_list.a: $(OBJ)
	@ar rc $@ $(OBJ)
.PHONY : simple_list.a

clean:
	@find . \( -name "*.o" -or -name "*.a" \) -delete
.PHONY : clean

re: clean all
.PHONY: re
