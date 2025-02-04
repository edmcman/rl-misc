
# 1 
void count_frequency(int tab[], int freq[]){
  int i,x;
  int frequency;

  for(i = 0; i < 20; i++){
    freq[i] = -1;
  }

  for(i = 0; i < 20; i++){
    frequency = 1;
    for(x = i+1; x < 20; x++){
      if(tab[i] == tab[x]){
 freq[x] = 0;
 frequency++;
      }
    }
    if(freq[i] != 0){
      freq[i] = frequency;
    }
  }
}