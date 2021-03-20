# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clala <clala@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/15 16:58:46 by clala             #+#    #+#              #
#    Updated: 2021/03/06 20:47:37 by clala            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
HEADERS_DIR = includes
HEADERS_NAMES=libft.h \
dlist.h \
error.h \
ft_printf.h \
get_next_line.h \
keys.h \
libft.h \
libft_basic.h \
t_buffer.h \
t_htable.h

HEADERS = $(addprefix $(HEADERS_DIR)/, $(HEADERS_NAMES))
include list.mak
OBJ=$(SRCS:.c=.o)
INCLUDES=-I./includes

CC=gcc -Wall -Wextra -Werror
THREADS = 8


all:
	$(MAKE) -j$(THREADS) $(NAME)

multi:
	$(MAKE) -j$(THREADS) all

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ) 
	@echo =================================
	@echo $(NAME) HAS BEEN MADE          
	@echo =================================	

%.o:%.c $(HEADERS)
	@$(CC) $(INCLUDES) -c $< -o $@
	@echo $<

		
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

.PHONY: lib clean fclean all re multi
