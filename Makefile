TARGET = psim

all:
	cd build && cmake .. && cmake --build .

run: all	
	./bin/$(TARGET)