
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
HEADERS = ft_printf.h
RM = rm -f

SRCS = ft_printf.c \
       ft_format.c \
       ft_putchar.c \
       ft_putstr.c \
			 ft_putptr.c \
			 ft_base16.c \
       ft_putnbr.c \
       ft_putnbr_unsigned.c \
       ft_puthex.c 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) ft_printf.h Makefile
	$(AR) $(ARFLAGS) $@ $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
