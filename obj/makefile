FOLDER=commons

# Default to run for just `make`
build: hello_world

# Compiles the hello_world executable with dependencies on commons and hello_world out files
hello_world: commons.o hello_world.o
	g++ -o hello_world hello_world.o commons.o

# Specific call for building the hello_world out. Written this way to update only on file update
hello_world.o: hello_world.cpp
	g++ -c hello_world.cpp -o hello_world.o

# Same as hello_world but with folder declaration
commons.o: $(FOLDER)/commons.cpp
	g++ -c $(FOLDER)/commons.cpp -o commons.o

# Set to run the executable file. If the file exists it runs it.
# If the file doesn't exist or there have been changes to dependency files, then the program rebuilds.
run: build
	./hello_world

# Cleans the executable and all out files
clean:
	rm -f hello_world *.o 2>/dev/null