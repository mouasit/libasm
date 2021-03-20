# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/19 10:47:19 by mouassit          #+#    #+#              #
#    Updated: 2021/02/19 10:47:23 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libasm.a

SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJ = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_write.o ft_read.o ft_strdup.o
all : $(NAME)

$(NAME):
	nasm -f macho64 ft_strlen.s -o ft_strlen.o ;
	nasm -f macho64 ft_strcpy.s -o ft_strcpy.o ;
	nasm -f macho64 ft_strcmp.s -o ft_strcmp.o ;
	nasm -f macho64 ft_write.s -o ft_write.o ;
	nasm -f macho64 ft_read.s -o ft_read.o ;
	nasm -f macho64 ft_strdup.s -o ft_strdup.o ;
	ar -rc $(NAME) $(OBJ) && ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all