#!/bin/bash
rm myProject
rm -r bin
mkdir bin
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/background.o src/background.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/draw.o src/draw.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/init.o src/init.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/input.o src/input.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/highscores.o src/highscores.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/main.o src/main.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/sound.o src/sound.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/stage.o src/stage.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/text.o src/text.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/title.o src/title.c
gcc  `sdl2-config --cflags` -Wall -Wempty-body -Werror -Wstrict-prototypes -Werror=maybe-uninitialized -Warray-bounds -g -lefence -c -o bin/util.o src/util.c
gcc -o myProject bin/background.o bin/draw.o bin/init.o bin/input.o bin/highscores.o bin/main.o bin/sound.o bin/stage.o bin/text.o bin/title.o bin/util.o `sdl2-config --libs` -lSDL2_mixer -lSDL2_image -lSDL2_ttf -lm
