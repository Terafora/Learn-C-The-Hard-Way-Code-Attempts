CFLAGS = -Wall -g

all: ex1

ex1: ex1.c
	cc $(CFLAGS) ex1.c -o ex1

clean:
	rm -f ex1

readman:
	@echo "============ README ============"
	@echo "I'm not really sure what to say"
	@echo "other than I made this."
	@echo "==============================="
