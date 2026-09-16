.PHONY: all build run doctest kattis_test clean

all: build run
	@echo "done.."

build:
	mkdir -p build
	g++ -std=c++17 -Wall -Iinclude src/main.cpp src/r2.cpp -o build/r2

run:
	./build/r2

doctest:
	mkdir -p build
	g++ -std=c++17 -Wall -Iinclude tests/test_r2.cpp src/r2.cpp -o build/test_r2
	./build/test_r2

kattis_test: build
	./build/r2 < data/sample1.in > build/sample1.out
	diff build/sample1.out data/sample1.ans
	./build/r2 < data/sample2.in > build/sample2.out
	diff build/sample2.out data/sample2.ans
	@echo "kattis tests passed!"

clean:
	rm -f build/*