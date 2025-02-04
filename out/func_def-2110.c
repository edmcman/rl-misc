#include <stdio.h>

#include <stdlib.h>

# 1 
void read_word(char *command, int *command_reader, char *word){
    int word_writer = 0;

    while(command[*command_reader] != ' ' & command[*command_reader] != '\0'){
        word[word_writer] = command[*command_reader];
        word_writer++;
        *command_reader = *command_reader + 1;
    }word[word_writer] = '\0';
}