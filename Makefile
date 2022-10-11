main: main.o funcs.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o funcs.o caesar.o vigenere.o decrypt.o

tests: tests.o funcs.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o funcs.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o 

funcs.o: funcs.cpp funcs.h

caesar.o: caesar.cpp caesar.h

main.o: main.cpp funcs.h caesar.h

tests.o: tests.cpp doctest.h funcs.h

test-ascii.o: test-ascii.cpp

vigenere.o: vigenere.cpp

decrypt.o: decrypt.cpp

clean:
	rm -f main.o funcs.o tests.o test-ascii.o caesar.o vigenere.o decrypt.o
