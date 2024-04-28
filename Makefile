NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iheaders/

SOURCE = 	main.c \
			ft_controls.c \
			ft_count.c \
			ft_images.c \
			ft_map.c \
			ft_search.c

OBJ = ${SOURCE:.c=.o}

PRINTF := printf/libftprintf.a
GETNEXTLINE := get_next_line/*c
LIBRARY := -Lminilibx -lmlx -framework OpenGL -framework AppKit
MINILIBX := minilibx/libmlx.a

# all:
# 	make -C $(MINILIBX)
# 	$(CC) $(CFLAGS) $(SOURCE) $(GETNEXTLINE) $(PRINTF) $(LIBRARY) -o $(NAME)

# clean:
# 	make -C ./printf
# 	@${cc} ${CFLAGS} 

# fclean: clean
# 		make clean -C $(MINILIBX)
# 		rm -rf $(NAME)


# re: fclean all

# all: $(OBJ)
# 	make -C $(MINILIBX)
# 	${CC} ${CFLAGS} ${SOURCE} ${LIBRARY} ${PRINTF} ${GETNEXTLINE} -o $(NAME)

# clean:
# 	make -C ./printf clean
# 	make -C ./minilibx clean
# 	rm -rf $(OBJS)

# fclean: clean
# 	make -C ./printf fclean
# 	make -C ./minilibx fclean
# 	rm -rf $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
		@${MAKE} -C ./printf
		@${MAKE} -C ./minilibx
		@${CC} ${CFLAGS} $(SOURCE) $(LIBRARY) $(PRINTF) $(GETNEXTLINE) -o $(NAME)

clean:
	@${MAKE} -C ./printf clean
	@${MAKE} -C ./minilibx clean
	rm -rf $(OBJ)

fclean: clean
	@${MAKE} -C ./printf fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
