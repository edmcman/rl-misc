#!/bin/bash

# Usage: $0 a.c b.c

PATH="$PATH:/home/stoke/stoke/bin"

CFLAGS="-O3"
BOUND=64
DEFS="{ %rax %rdx %rbx %rsp %rbp %esi %rdi %r12 %r13 %r14 %r15 %xmm0 %xmm1 %cf %pf %af %zf %sf %of %mxcsr::rc[0] %rdx %rsi }"

set -ex

gcc "$CFLAGS" -c $1 -o /tmp/a.o
gcc "$CFLAGS" -c $2 -o /tmp/b.o

rm -rf /tmp/stoke
mkdir -p /tmp/stoke/a-funcs
mkdir -p /tmp/stoke/b-funcs

stoke extract -i /tmp/a.o -o /tmp/stoke/a-funcs
stoke extract -i /tmp/b.o -o /tmp/stoke/b-funcs

# Random test-cases
stoke testcase --target /tmp/stoke/a-funcs/*.s --max_testcases 1024 -o /tmp/random_testcases.tc

# Symbolic test-cases
#stoke_tcgen --target /tmp/stoke/a-funcs/*.s --bound $BOUND --output /tmp/symb_testcases.tc

stoke debug cost --target /tmp/stoke/a-funcs/*.s --rewrite /tmp/stoke/b-funcs/*.s --def_in "$DEFS" --testcases /tmp/random_testcases.tc --cost correctness
