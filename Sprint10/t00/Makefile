NAME = read_file
SRC_D = src
INC_D = inc
SRC_F = src/*.c
INC_F = inc/header.h
CLANG = clang -std=c11 -Wall -Wextra -Werror -Wpedantic
RM = rm -rf
all: $(NAME) clean

$(NAME):
	@$(CLANG) $(SRC_F) -o $@ -I $(INC_D)

clean:
	@$(RM) $(SRC_D)/*.h

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all

