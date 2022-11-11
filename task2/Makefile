PACKAGE_NAME1 = upper
PACKAGE_NAME2 = lower
LIB_NAME = libconvert.so
FLAGS = -Wall -Werror -Wextra

all: upper lower libsetup

upper: uper.c lib
	gcc ${FLAGS} uper.c -L. -l convert -o ${PACKAGE_NAME1}

lower: low.c lib
	gcc ${FLAGS} low.c -L. -l convert -o ${PACKAGE_NAME2}

links: 
	gcc ${FLAGS} -fpic -c libconvert.c

lib: links
	gcc -shared -o ${LIB_NAME} libconvert.o

libsetup:
	sudo cp `pwd`/${LIB_NAME} /usr/lib
	sudo chmod 0755 /usr/lib/${LIB_NAME}
	sudo ldconfig
	unset LD_LIBRARY_PATH
	gcc uper.c -l convert ${FLAGS} -o ${PACKAGE_NAME1}
	gcc low.c -l convert ${FLAGS} -o ${PACKAGE_NAME2}

.PHONY: clean clean-all

clean:
	rm -f *.o

clean-all: clean
	rm -f ${PACKAGE_NAME1}
	rm -f ${PACKAGE_NAME2}
	rm -f ${LIB_NAME}

