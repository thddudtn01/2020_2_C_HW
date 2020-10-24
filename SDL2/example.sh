#!/bin/bash

rm -r shooter
rm -r bad
mkdir ./shooter
mkdir ./bad

cd shooter
for var in {1..9}
do
    ADDRESS="https://www.parallelrealities.co.uk/downloads/tutorials/sdl2/shooter0$var.tar.gz"
    wget ${ADDRESS}
    tar xzvf shooter0$var.tar.gz
    rm shooter0$var.tar.gz
    cd ./shooter0$var
    make
    cd ../
done
for var in {0..5}
do
    ADDRESS="https://www.parallelrealities.co.uk/downloads/tutorials/sdl2/shooter1$var.tar.gz"
    wget ${ADDRESS}
    tar xzvf shooter1$var.tar.gz
    rm shooter1$var.tar.gz
    cd ./shooter1$var
    make
    cd ../
done
cd ../bad
for var in {1..6}
do
    ADDRESS="https://www.parallelrealities.co.uk/downloads/tutorials/sdl2/bad0$var.tar.gz"
    wget ${ADDRESS}
    tar xzvf bad0$var.tar.gz
    rm bad0$var.tar.gz
    cd ./bad0$var
    make
    cd ../
done