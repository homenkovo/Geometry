all:
	rm build/*.o
	rm build/*.a

	@cd build
	g++ -std=c++23 -c ../geometry/*.cpp
	@cd ..

	ar r build/libgeometry.a build/*.o
