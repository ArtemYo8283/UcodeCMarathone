
NAME = matrix_rain
SRC_DIR = src
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
INC_FILES = $(wildcard $(INC_DIR)/*.h)

CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses

RM = rm -rf

all: MINILIBMX clean

MINILIBMX:
	@$(CC) $(CFLAGS) $(SRC_FILES) -I $(INC_DIR) -o $(NAME)

$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(OBJ_DIR):
	@$(MKDIR) $@

clean:
	@$(RM) $(OBJ_DIR)

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all

