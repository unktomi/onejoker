# Token Makefile that just calls the real build script
#

all: library

.PHONY: library
library:
	python3 ./build.py library

.PHONY: tests
tests:
	python3 ./build.py runtests

.PHONY: clean
clean:
	python3 ./build.py cleanall
