files = hamming.cpp HammingLibrary.cpp

headers = HammingLibrary.hpp

objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

hamming: objects
	echo 'Generando programa final...'
	g++ -o hamming.exe -I $(headers) $(objects)

objects:
	g++ -c $(files)

clean:
	-rm *.o