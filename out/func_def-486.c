#include <elf.h>

#include <errno.h>

#include <fcntl.h>

#include <stdarg.h>

#include <stdbool.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/mman.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <unistd.h>

# 1 
static void write_elf_word(Elf32_Word val, Elf32_Word *dst, bool swap)
{
 *dst = swap ? ((((val) & 0x000000ff) << 24) | (((val) & 0x0000ff00) << 8) | (((val) & 0x00ff0000) >> 8) | (((val) & 0xff000000) >> 24)) : val;
}