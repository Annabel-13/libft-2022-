NAME = libft.a
CC = gcc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rc

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \


SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c ft_lstiter.c

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)

$(NAME): 
	$(CC)  $(FLAGS) $(SRC)
	$(AR)  $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: 
	$(CC)  $(FLAGS) $(SRC) $(SRC_B)
	$(AR)  $(NAME) $(OBJ) $(OBJ_B)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(OBJ_B)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re

# -c  - Directs the compiler to suppress linking with ld(1) and to produce a .o file for each source file
# 
# The - ar - command maintains the indexed libraries used by the linkage editor. The ar command combines one 
# or more named files into a single archive file written in ar archive format. When the ar command creates 
# a library, it creates headers in a transportable format; when it creates or updates a library, it rebuilds 
# the symbol table. See the ar file format entry for information on the format and structure of indexed 
# archives and symbol tables.
# 
# A phony target is one that is not really the name of a file; rather it is just a name for a recipe to be 
# executed when you make an explicit request.