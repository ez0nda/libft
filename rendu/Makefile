# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezonda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 09:46:09 by ezonda            #+#    #+#              #
#    Updated: 2018/11/13 20:56:53 by ezonda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./*.c

OBJ = ./*.o

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@echo "Compilation"
	@echo "Creation de $(NAME)"

clean:
	@/bin/rm -f $(OBJ)
	@echo "Suppression des fichiers objets"

fclean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f $(NAME)
	@echo "Suppression des fichiers objets"
	@echo "Suppression de $(NAME)"

re: fclean all
