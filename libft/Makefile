# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 11:22:35 by grdalmas          #+#    #+#              #
#    Updated: 2018/03/05 12:18:19 by grdalmas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR =	./src/
SRC = 	ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_alpha_is_low.c \
		ft_alpha_is_up.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strdel.c \
		ft_strrchr.c \
		ft_strnew.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_nbrlen.c \
		ft_itoa.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_isspace.c \
		ft_strndup.c \
		ft_putstrdebug.c \
		ft_lstadd_back.c \
		get_next_line.c
				
SRCS =		$(addprefix $(SRC_DIR),$(SRC))

OBJ_DIR =	./obj/
OBJ = 		$(SRC:.c=.o)
OBJS =		$(addprefix $(OBJ_DIR),$(OBJ))

INC_DIR =	./includes/
INC =		libft.h
INCS =		$(addprefix $(INC_DIR),$(INC))

CC = clang

CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

all: $(NAME)

$(NAME):	$(OBJ_DIR) $(OBJS) 
	@echo "Creating library..."
	@ar rc $(NAME) $(OBJS)
	@echo "Indexing library..."
	@ranlib $(NAME)
	@echo "Done, all good"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c $(INCS)
		@$(CC) $(CFLAGS) -c $< -o $@ 

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

clean:
	@echo "Deleting objects.."
	@rm -rf $(OBJS)
	@rm -rf $(OBJ_DIR)
	@echo "All objects deleted"
	
fclean: clean
	@echo "Deleting all files..."
	@rm -rf $(NAME)
	@echo "All files deleted"
	
re: fclean all

.PHONY: all clean fclean re
