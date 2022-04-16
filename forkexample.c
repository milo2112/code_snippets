#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
   
    int id = fork();
    if (id > 0)
    
        printf(" \nDisplaying id from Parent fork process: %d\n\n\n\n", id);
    else
    
        printf(" \nDisplaying id from Child fork process: %d\n\n\n\n", id);
   
    if (id < 0)
        printf(" \nError creating fork process", id);

    
    return 0;
}    
