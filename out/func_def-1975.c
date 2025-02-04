#include <stdio.h>

#include <stdlib.h>

# 1 
void euler_trail(int here, int graph[26][26], int counter[26], int* trail_count){
 for(int there=0;there<26;there++){
  if(counter[there] && graph[here][there]){
   graph[here][there]--;
   euler_trail(there, graph, counter, trail_count);
  }
 }
 (*trail_count)++;
}