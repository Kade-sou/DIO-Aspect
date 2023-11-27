SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

CC = ./aspectc++/ag++
RM = rm -rf
NAME = done

.cpp.o:
	${CC} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJ}
	${CC} ${OBJ} -o ${NAME}

all: ${NAME}
	./$(NAME)
clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

