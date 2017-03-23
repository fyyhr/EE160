# target to make all programs for Lab 9
all: lines grader averager

# Problem 1 - lines
#       complete the dependency and action lines for your filenames
lines:
	cc  -o lines

# Problem 2 - grader
grader: 
	cc -o grader


# Problem 3 - averager
averager: averager.o
	cc averager.o -o averager

# source file dependencies
#       add target lines showing dependencies for your .o files

average.o: averager.c
	cc -c averager.o

# utility targets

clean:
	rm -f *.o

real_clean: clean
	rm -f lines grader averager
