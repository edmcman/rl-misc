# Getting started

Run the following commands (you need docker):

1. `docker run -v <THISDIR>:/mnt -it stanfordpl/stoke:latest bash`
2. `cd /home/stoke/stoke && ./configure.sh && make`
3. `cd /mnt`
4. Ghidra: `for x in $(seq 2133); do echo $x; bash compare.bash out/func_def-$x.c out/ghidra-$x.c; done`
5. Hex-rays: `for x in $(seq 2133); do echo $x; bash compare.bash out/func_def-$x.c out/hex-rays-$x.c; done`

This will do comparisons between the original source code and the
Ghidra/Hex-rays decompilation.  Most fail because they don't compile.  You can
fairly easily search for the ones that compile by grepping for "Cost:" in the
output.  It will also output the "Target", which is the assembly code of the
original executable we are decompiling, and the "Rewrite", which is the assembly
code of the decompiled code (after it is re-compiled).

The logs for this are in `out-ghidra.log` and `out-hexrays.log` respectively in case
you want to look at the output but don't feel like running it.

# Interesting examples

I put some interesting examples in `interesting` and a few examples that didn't compile
in `no-compile`.

Run each pair with `compare.bash` as above, i.e., `bash compare.bash
interesting/{func_def,hex-rays}-111.c`.

# Notes

I noticed some tests with a cost of 40000 but the code is identical.  I am not
sure what's going on there.  Maybe something wrong with STOKE's sandbox?

A lot of compilation could be fixed by adding a Ghidra header file.

The script currently uses randomly generated test cases, but could use testcases
from symbolic execution instead.

STOKE in this configuration will only work on leaf functions (i.e., no function
calls allowed, except maybe to compiler built-ins).
