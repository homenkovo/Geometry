all:
	rm build/*.o
	rm build/*.a

	@cd build
	g++ -std=c++23 -O2 -Wall -Wextra -Wpedantic -c ../geometry/*.cpp
	@cd ..

	ar r build/libgeometry.a build/*.o
