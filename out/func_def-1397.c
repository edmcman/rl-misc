#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

#include <ctype.h>

# 1 
void strBracketMatch(const char *in, int *CommaPositions, int *Nargs, int *ClosingBracketPos, int MaxCommaPoses) {
    int BracketLevel = 0;
    int inpos = 0;
    int commapos = 0;
    char QuoteType = '\0';

    for (; in[inpos] != '\0'; inpos++) {
        if (QuoteType != '\0')
        {
            if ((in[inpos] == QuoteType) && (in[inpos - 1] != '\\')) QuoteType = '\0';
            continue;
        } else if ((in[inpos] == '\'') || (in[inpos] == '\"')) QuoteType = in[inpos];
        else if (in[inpos] == '(')
        {
            BracketLevel += 1;
            if (BracketLevel == 1)
                if ((CommaPositions != NULL) && ((MaxCommaPoses < 0) || (commapos < MaxCommaPoses)))
                    *(CommaPositions + (commapos++)) = inpos;
        } else if (in[inpos] == ')')
        {
            BracketLevel -= 1;
            if (BracketLevel == 0) break;
        } else if ((in[inpos] == ',') && (BracketLevel == 1))
        {
            if ((CommaPositions != NULL) && ((MaxCommaPoses < 0) || (commapos < MaxCommaPoses)))
                *(CommaPositions + (commapos++)) = inpos;
        }
    }

    if (in[inpos] == '\0') {
        if (Nargs != NULL) *Nargs = -1;
        if (ClosingBracketPos != NULL) *ClosingBracketPos = -1;
        return;
    } else {
        if ((CommaPositions != NULL) && ((MaxCommaPoses < 0) || (commapos < MaxCommaPoses)))
            *(CommaPositions + (commapos++)) = inpos;
        if (Nargs != NULL)
            *Nargs = commapos - 1;
        if (ClosingBracketPos != NULL) *ClosingBracketPos = inpos;
        return;
    }
}