# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 18:11:49 by marcsilv          #+#    #+#              #
#    Updated: 2024/10/22 17:15:06 by marcsilv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS =  -g -Wall -Wextra -Werror
SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = .
HEADER = libft.h

SRC_FILES = 		ft_atoi.c ft_num_len.c ft_putnbr.c ft_strlcpy.c ft_isdigit.c ft_strncpy.c\
			ft_printf.c ft_putstr.c ft_strlen.c ft_matrix_free.c ft_print_ptr.c ft_putstr_fd.c \
			ft_split.c ft_strncmp.c print_error.c ft_matrix_len.c ft_strcpy.c ft_isspace.c\
			ft_print_unsigned.c ft_strchr.c ft_substr.c ft_memcpy.c ft_ptr_len.c fix_next_line.c\
			ft_strdup.c ft_uitoa.c ft_memmove.c ft_putchar.c ft_strjoin.c get_next_line.c \
            
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ_PATHS = $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))


all: $(NAME)

$(NAME): $(OBJ_PATHS)
	ar rcs $(NAME) $(OBJ_PATHS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re