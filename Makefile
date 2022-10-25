# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 17:12:28 by video-fl          #+#    #+#              #
#    Updated: 2022/10/24 18:19:02 by video-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = libft.a
HEADER = libft.h
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c 
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -MMD
RM = rm -f
DEPS = $(SRC:.c=.d)

#Colors
DEFCOLOR = \033[0m
YELLOW = \033[3;33m
RED = \033[3;31m

.c.o: $(CC) $(CFLAGS) -I libft.h -c $< -o $(<:.c=.o)

#Rules
all:	$(NAME)

-include $(DEPS)
$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY:	all clean fclean re 

-include $(DEPS)
clean:
	@echo "$(RED)Clean 🧹$(DEFCOLOR)"
	$(RM) $(OBJ)

fclean:	clean
	@echo "$(RED)FClean 🧹$(DEFCOLOR)"
	$(RM) $(NAME)

re:	fclean all
