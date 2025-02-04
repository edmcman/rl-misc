
# 1 
int cipher (char* text, int lkey, int nkey) {

    int textLength;


    int x, offset, lkeyHash, nkeyHash, decryptFlag;


    int lastQuad;


    int i; char temp;





    textLength = 0;


    while(text[textLength] != '\0') {
        ++textLength;
    }

    textLength += 1;


    if(textLength > 1025) {
        textLength = 1025;
        text[textLength] = '\0';
    }







    lkeyHash = (lkey % 26) + 26;
    nkeyHash = (nkey % 10) + 10;

    decryptFlag = ( (lkey < 0) && (lkey & 0x1) );


    for (i = 0; i < textLength; i++) {

        if(text[i] >= 'A' && text[i] <= 'Z') {
            x = (text[i] - 'A' + lkeyHash) % 26;

            if (decryptFlag)
                offset = ((x-'A') & 0x1) ? 'A':'a';
            else
                offset = ((x-'A') & 0x1) ? 'a':'A';

            text[i] = x + offset;
        }

        else if(text[i] >= 'a' && text[i] <= 'z') {
            x = (text[i] - 'a' + lkeyHash) % 26;
            offset = (decryptFlag) ?
                ( ( (x - 'A') & 0x1 ) ? 'a' : 'A' ) :
                ( ( (x - 'A') & 0x1 ) ? 'A' : 'a') ;
            text[i] = x + offset;
        }

        else if(text[i] >= '0' && text[i] <= '9') {
            text[i] = ((text[i] - '0' + nkeyHash) % 10) + '0';
        }
        else
            continue;
    }




    lastQuad = textLength % 4;

    for (i = 0; i < (textLength - lastQuad); i+=4) {
        temp = text[i];
        text[i] = text[i+2];
        text[i+2] = temp;

        temp = text[i+1];
        text[i+1] = text[i+3];
        text[i+3] = temp;
    }


    if (lastQuad !=0)
        switch(lastQuad) {
            case 1:
                break;

            case 2:
                temp = text[i];
                text[i] = text[i+1];
                text[i+1] = temp;
                break;
            case 3:
                temp = text[i];
                text[i] = text[i+2];
                text[i+2] = temp;
                break;
        }

    return textLength;
}