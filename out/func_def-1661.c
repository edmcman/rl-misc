#include <stdio.h>

# 1 
void escape(char s[], char t[]) {
    int i, j, c;

    for (i = 0, j = 0; (c = t[i]) != '\0'; i++) {
        switch (c) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = c;
        }
    }
    s[j] = '\0';
}