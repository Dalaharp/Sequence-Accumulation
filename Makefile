COMPILER = g++
OPTIONS = -std=c++11 -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp
	$(COMPILER) $(OPTIONS) main.cpp -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
