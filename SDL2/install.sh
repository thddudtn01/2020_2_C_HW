#!/bin/bash

sudo apt-get update
sudo apt-get upgrade
sudo apt-get install libsdl2-mixer-dev libsdl2-image-dev libsdl2-ttf-dev xorg-dev

#if [ -d './SDL2-2.0.12' ] ; then
#    cd SDL2-2.0.12/
#    sudo make uninstall
#    cd ../
#    rm -r SDL2-2.0.12/
#fi

if [ -d './shooter15' ] ; then
    rm -r shooter15/
fi

if [ -d './bad06' ] ; then
    rm -r bad06/
fi

wget https://www.libsdl.org/release/SDL2-2.0.12.tar.gz
wget https://www.parallelrealities.co.uk/downloads/tutorials/sdl2/shooter15.tar.gz
wget https://www.parallelrealities.co.uk/downloads/tutorials/sdl2/bad06.tar.gz

tar xzvf SDL2-2.0.12.tar.gz
tar xzvf shooter15.tar.gz
tar xzvf bad06.tar.gz

rm SDL2-2.0.12.tar.gz
rm shooter15.tar.gz
rm bad06.tar.gz

#cd SDL2-2.0.12/
#./configure
#make
#sudo make install
#cd ..

echo -e "\n\n"
echo "        -----------------------------------------"
echo "        | If this is the first time to install, |"
echo "        |      a reboot may be required.        |"
echo "        -----------------------------------------"
echo -e "\n\n"