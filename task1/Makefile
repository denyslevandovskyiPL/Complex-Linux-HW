
PACKAGE_NAME = calculation
LIB_NAME = libcalc.a
FLAGS = -Wall -Werror -Wextra

all: calculation

calculation: main.c lib
	gcc ${FLAGS} main.c -L. -l calc -lm -o ${PACKAGE_NAME}

links: 
	gcc ${FLAGS} -c getUserInfo.c calculations.c 

lib: links
	ar -rc ${LIB_NAME} *.o

.PHONY: clean clean-all

clean:
	rm -f *.o

clean-all: clean
	rm -f ${PACKAGE_NAME}
	rm -f ${LIB_NAME}
	
