CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
FUNC = src/*.c
OBJS = obj/*.o
OBJS_FOLDER = obj
EXEC = minilibmx.a

all: clean MINILIBMX

MINILIBMX:
	mkdir $(OBJS_FOLDER)
	cd $(OBJS_FOLDER) && $(CC) -c ../$(FUNC)
	ar rcs $(EXEC) $(OBJS)
	$(CC) $(CFLAGS) -o part_of_the_matrix $(EXEC)

clean: 
	rm -rf $(EXEC) $(OBJS_FOLDER)

uninstall:
	rm -rf  $(EXEC) $(OBJS_FOLDER)

reinstall: all

