.PHONY: all build run doctest kattis_test clean

all: build run
	@echo "done.."

build:
	g++ -std=c++17 -Wall -Iinclude src/main.cpp src/twosum.cpp -o build/twosum

run:
	./build/twosum

doctest:
	g++ -std=c++17 -Wall -Iinclude tests/test_twosum.cpp src/twosum.cpp -o build/test_twosum
	./build/test_twosum

kattis_test: build
	./build/twosum < data/sample1.in > build/sample1.out
	diff build/sample1.out data/sample1.ans
	./build/twosum < data/sample2.in > build/sample2.out
	diff build/sample2.out data/sample2.ans
	@echo "kattis tests passed!"

clean:
	rm -f build/*