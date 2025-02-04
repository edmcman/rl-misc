
# 1 
int VerifierNombre(char *ch, int *nb) {
    char type;
    int i = 0;
    *nb = 0;
    while (ch[i] != '\0') {
        if ((ch[i] >= '0') && (ch[i] <= '9')) {
            *nb = *nb * 10 + ch[i] - '0';
        } else if (ch[i] == '-'){
            *nb = (*nb) * -1;
            return 1;
        } else {
            return 0;
        }
        i++;
    }
    return 1;
}