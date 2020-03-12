COMPONENTS_DIRNAMES=

all: test

test: install
	cd bin; \
	LD_LIBRARY_PATH=. ./main

install:
	cd main && ${MAKE} install && COMPONENTS_DIRNAMES=${COMPONENTS_DIRNAMES}

clean:
	cd main && ${MAKE} clean
