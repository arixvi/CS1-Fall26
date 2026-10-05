CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iincludes

build:
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/main.cpp src/leggjasaman.cpp -o build/leggjasaman

run: build
	./build/leggjasaman

doctest:
	mkdir -p build
	$(CXX) $(CXXFLAGS) tests/test_leggjasaman.cpp src/leggjasaman.cpp -o build/test_leggjasaman
	./build/test_leggjasaman

kattis_test: build
	./build/leggjasaman < data/1.in > build/1.out
	diff build/1.out data/1.ans
	./build/leggjasaman < data/2.in > build/2.out
	diff build/2.out data/2.ans
	./build/leggjasaman < data/3.in > build/3.out
	diff build/3.out data/3.ans
	./build/leggjasaman < data/4.in > build/4.out
	diff build/4.out data/4.ans
	./build/leggjasaman < data/5.in > build/5.out
	diff build/5.out data/5.ans
	@echo "kattis tests passed!"

clean:
	rm -rf build

