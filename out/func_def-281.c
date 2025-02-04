


# 1 
void findMostUsed(char buffer, char counts[], int often[]){
    int i=0;
    while(i<27){
        if(buffer==counts[i]){
            often[i]+=1;
            return;
        }
        i++;
    }
    i=0;
    while(often[i]!=0){
        i++;
    }
    if(i<27){
    if(buffer!=64){
        counts[i]=buffer;
        often[i]+=1;
    }
    return;
    }
}