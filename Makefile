SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = aspect

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

all: ${NAME}
	./$(NAME)
clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

