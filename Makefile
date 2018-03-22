NAME = fractol
CC = @clang
FLAGS = -Wall -Wextra -Werror -O3

HEADERS = includes

SOURCES = button.c\
destroy.c\
drawpixel.c\
ft_beastdraw.c\
ft_burningdraw.c\
ft_expose.c\
ft_fracmouse.c\
ft_fracmouse_suite.c\
ft_heartdraw.c\
ft_homeicon.c\
ft_julia.c\
ft_kelfrac.c\
ft_kelfracdraw.c\
ft_kelfraclick.c\
ft_mandelbrot.c\
ft_mandeldraw.c\
ft_menu.c\
ft_multifracmouse.c\
ft_rainbowshit.c\
ft_redraw.c\
ft_set_burningship.c\
ft_set_data.c\
ft_set_julia.c\
ft_set_mandelbrot.c\
key.c\
main.c\
minilibft.c\
motion.c\
multi_hook.c\
set_color.c

SRCDIR = ./srcs/

SRCINC = $(addprefix $(SRCDIR),$(SOURCES))

OBJECTS = $(SRCINC:.c=.o)

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) -o $@ $^ -I/usr/local/include -g -L/usr/local/lib -lmlx -framework OpenGL -framework AppKit
	@echo "susu $(NAME)! ca compile maggle."

all: $(NAME)

%.o: %.c $(HEADERS)/$(NAME).h
	@$(CC) $(FLAGS) -I $(HEADERS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all, clean, fclean, re
