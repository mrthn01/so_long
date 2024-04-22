NAME = solong

SRCS = ft_applications.c ft_checker.c ft_controls.c \
		ft_images.c ft_map.c ft_mlx_initialize.c \
		ft_search.c main.c ft_errors.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
PRINTF = printf/libftprintf.a
MINILIBX = minilibx/libmlx.a
SOLONG = solong

all: ${NAME} $(SOLONG)

$(NAME): $(OBJS)
	@${MAKE} -C ./printf
	@${MAKE} -C ./libft
	@${MAKE} -C ./minilibx
	@${CC} ${CFLAGS} ${SRCS} ${PRINTF} ${LIBFT} ${MINILIBX} -o ${OBJS}

clean:
	@${MAKE} -C ./printf clean
	@${MAKE} -C ./libft clean
	@${MAKE} -C ./minilibx clean
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}
	
re: fclean all

.PHONY: all clean fclean all