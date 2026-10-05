CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iincludes

build:
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/main.cpp src/monamonamona.cpp -o build/monamonamona

run: build
	./build/monamonamona

doctest:
	mkdir -p build
	$(CXX) $(CXXFLAGS) -I../../doctest tests/test_monamonamona.cpp src/monamonamona.cpp -o build/test_monamonamona
	./build/test_monamonamona

kattis_test: build
	./build/monamonamona < data/1.in > build/1.out
	diff build/1.out data/1.ans
	./build/monamonamona < data/2.in > build/2.out
	diff build/2.out data/2.ans
	./build/monamonamona < data/3.in > build/3.out
	diff build/3.out data/3.ans
	./build/monamonamona < data/4.in > build/4.out
	diff build/4.out data/4.ans
	./build/monamonamona < data/5.in > build/5.out
	diff build/5.out data/5.ans
	./build/monamonamona < data/6.in > build/6.out
	diff build/6.out data/6.ans
	@echo "kattis tests passed!"

clean:
	rm -rf build

