CURR_DIR=/ctf/work/fastbin_fun

all: patch_build

patch_build: fast_build 
	patchelf --set-interpreter ld-linux-x86-64.so.2 --set-rpath ${CURR_DIR} fastbin
fast_build: fastbin.c 
	gcc -o fastbin fastbin.c
clean: 
	rm -f fastbin

