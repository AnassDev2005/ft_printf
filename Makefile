
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
HEADERS = ft_printf.h
RM = rm -f
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
CP = cp

SRCS = ft_printf.c \
       ft_format.c \
       ft_putchar.c \
       ft_putstr.c \
       ft_putnbr.c \
       ft_puthex.c \
       ft_putptr.c

OBJS = $(SRCS:.c=.o)

all : $(LIBFT) $(NAME)

$(LIBFT) : 
	make -C $(LIBFT_DIR)

$(NAME) : $(LIBFT) $(OBJS) ft_printf.h Makefile
	$(CP) $(LIBFT) $@	
	$(AR) $(ARFLAGS) $@ $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean : clean 
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
	
