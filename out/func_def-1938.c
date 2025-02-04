#include <stdlib.h>

# 1 
const char *librock_fillTemplateTokenize(
        const char *pTemplate,
        int iOffset,
        int *pCount
        )
{
    const char *pRead = pTemplate + iOffset;
    const char *pNext = memchr(pRead, '@', *pCount);
# 56 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/forrestcavalier/awsFillAndSign/refs/heads/master/u-librock/mit/librock_fillTemplate.c"
    if (!pNext) {
        return "0-body";
    }
    if (pNext > pRead) {
        *pCount = pNext - pRead;
        return "0-body";
    }

    if (*pCount >=2 && pRead[1] == '/' && pRead[2] == '/') {
        pNext = memchr(pRead, '\n', *pCount);
        if (pNext) {
            if (pRead == pTemplate || pRead[-1] == '\n') {

                *pCount = pNext - pRead + 1;
            } else {
                *pCount = pNext - pRead;
            }
        }
        return "1-comment";
    }
    pNext = memchr(pRead+1, '@', *pCount-1);
    if (!pNext) {
        return "2-Error-non-closing";
    }
    *pCount = pNext+1 - pRead;
    return "3-parameter";
}