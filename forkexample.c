#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){

    int id = fork();
    printf(" \nDisplaying from fork id: %d\n\n\n\n", id);
    printf("   Displaying flag");
    return 0;
}
