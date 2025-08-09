
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchrysov <dchrysov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 16:35:33 by dchrysov          #+#    #+#              #
#    Updated: 2024/10/09 16:35:33 by dchrysov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
MAKEFLAGS +=s
CFLAGS = -Wall -Werror -Wextra -I$(INCDIR)

INCDIR = ./include
SRCDIR = ./src
OBJDIR = ./obj

SRCS = $(SRCDIR)/ft_isalnum.c $(SRCDIR)/ft_isprint.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_toupper.c\
		$(SRCDIR)/ft_tolower.c $(SRCDIR)/ft_isalpha.c $(SRCDIR)/ft_isdigit.c $(SRCDIR)/ft_isascii.c\
		$(SRCDIR)/ft_memset.c $(SRCDIR)/ft_strchr.c $(SRCDIR)/ft_strrchr.c $(SRCDIR)/ft_strlcpy.c\
		$(SRCDIR)/ft_strncmp.c $(SRCDIR)/ft_strlcat.c $(SRCDIR)/ft_atoi.c $(SRCDIR)/ft_bzero.c\
		$(SRCDIR)/ft_memcpy.c $(SRCDIR)/ft_memcmp.c $(SRCDIR)/ft_memmove.c $(SRCDIR)/ft_memchr.c\
		$(SRCDIR)/ft_calloc.c $(SRCDIR)/ft_strdup.c $(SRCDIR)/ft_itoa.c $(SRCDIR)/ft_putchar_fd.c\
		$(SRCDIR)/ft_putendl_fd.c $(SRCDIR)/ft_putnbr_fd.c $(SRCDIR)/ft_putstr_fd.c $(SRCDIR)/ft_substr.c\
		$(SRCDIR)/ft_strjoin.c $(SRCDIR)/ft_striteri.c $(SRCDIR)/ft_strmapi.c $(SRCDIR)/ft_strtrim.c\
		$(SRCDIR)/ft_strnstr.c $(SRCDIR)/ft_split.c 

OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	@printf "[.]   📦 Compiling '\033[33m$(NAME)\033[0m'...\r"
	ar rcs $(NAME) $(OBJS)
	@echo "🚀 '\033[33m$(NAME)\033[0m' compiled \033[32msuccessfully\033[0m!"

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJDIR)/*.o

fclean: clean
	@printf "[.]   🧹 Removing '\033[33m$(NAME)\033[0m' build...\r"
	rm -f $(NAME)
	printf "[✅]  🧹 Removed '\033[33m$(NAME)\033[0m' build...  \n"

re: fclean all

.PHONY: all clean fclean re