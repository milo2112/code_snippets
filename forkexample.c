#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    printf(" \nbefore fork flag\n");
    int id = fork();
    printf(" \nDisplaying from fork id: %d\n\n\n\n", id);
    // printf(" \nDisplaying flag\n");
    return 0;
    
}
