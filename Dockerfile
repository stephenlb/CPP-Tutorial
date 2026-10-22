from ubuntu:24.04

run apt-get update
run apt-get install -y g++ libc6-dev liburing-dev build-essential

workdir /app
copy iouring.cpp iouring.cpp
#run g++ -std=c++26 iouring.cpp -o iouring 
#run clang++ -std=c++26 iouring.cpp
run g++ -std=c++23 iouring.cpp -o iouring -luring

cmd ["./iouring"]
#cmd ["g++", "--version"]
