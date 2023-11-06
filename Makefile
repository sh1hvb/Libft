CFALGS = cc -Wall -Wextra -Werror
FILES = ft_split.c


out : main
	./a.out
main : 
	$(CFALGS) $(FILES)

clean :
	rm ./a.out