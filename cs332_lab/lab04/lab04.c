#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define BUFFSIZE 4096

int main(int argc, char *argv[]){

    if (argc != 3){

        printf("Error");
        return 0;

    }

    if(strcmp(argv[1], argv[2]) == 0){

        printf("Error");
        return 0;

    }

    int first_file;
    int second_file;

    char buf[BUFFSIZE];
    long int get_char;

    first_file = open(argv[1], O_WRONLY | O_APPEND);
    second_file = open(argv[2], O_RDONLY);

    if (first_file == -1 || second_file == -1){

        printf("Error");
        return 0;

    }

    while((get_char = read(second_file, buf, BUFFSIZE)) > 0){

        if(write(first_file, buf, get_char) != get_char){

            printf("Error");
            return 0;

        }

    }

    if(get_char < 0){

        printf("Error");
        return 0;

    }

    close(first_file);
    close(second_file);

    return 0;
}