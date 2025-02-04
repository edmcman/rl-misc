# Getting started

1. Run `docker run -v <THISDIR>:/mnt -it stanfordpl/stoke:latest bash`
2. `cd /home/stoke/stoke && ./configure.sh && make`
3. `cd /mnt`
4. `for x in $(seq 2000); do echo $x; bash compare.bash out/func_def-$x.c out/ghidra-$x.c; done`
