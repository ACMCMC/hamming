files = hamming.cpp HammingLibrary.cpp

headers = HammingLibrary.hpp

objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

hamming: objects
	g++ -o hamming.out -I $(headers) $(objects)

objects:
	g++ -c $(files)

clean:
	-rm *.o