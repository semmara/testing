all:
	gcc -o gccprog main.c
	clang -o clangprog main.c
	clang -fstack-protector -o clangprog_stackprotector main.c
	clang -D_FORTIFY_SOURCE=2 -O1 -o clangprog_fortify main.c

BIN = gccprog clangprog clangprog_stackprotector clangprog_fortify

test1:
	for bin in $(BIN); do echo "====="; ./$$bin `python -c 'print "A"*40'`; echo $$?; done

clean:
	for bin in $(BIN); do rm -f $$bin; done

