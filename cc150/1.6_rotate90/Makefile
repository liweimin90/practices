#CC=g++
CC=g++-5
#FLAGS=-std=c++11 -I/usr/local/include/ -L/usr/local/lib/ -lboost_regex
FLAGS=-std=c++11 -I/usr/local/gcc/include/ -L/usr/local/gcc/lib/ -lboost_regex
#FLAGS=-std=c++11 -I/Users/taos/Downloads/tar/boost_1_60_0/ -o -l/Users/taos/Downloads/tar/boost_1_60_0/stage/libboost_regex.a

easyTest : easyTest.cpp
	${CC} $^ -o $@ ${FLAGS}

clean :
	rm -rf easyTest
