#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 80

#include "parser.h"
#include "functions.h"




extern enum READING_ENUM reading_state;


int main(int argc, char *argv[]){
    size_t getline_res = 0;
    char *buffer = NULL;
    size_t buffsize = BUFFERSIZE;

    FILE *fp = NULL;

    reading_state = READING_HEADER;



    if(argc != 2){
        printf("incorrect_args\n");
        return 0;
    }
   

    fp = fopen(argv[1], "r");

    if(fp == NULL){
        printf("cant_open_file\n");
        return 0;
    }else{
        printf("file_opened\n");
    }
    
    

    buffer = (char *)malloc(BUFFERSIZE * sizeof(char));
    if(buffer == NULL){
        printf("cant_allocate_buffer\n");
        return 0;
    }



  

    getline_res = getline(&buffer, &buffsize, fp );
    while(getline_res != -1){
        printf("%s", buffer);
        process_line(buffer);

        getline_res = getline(&buffer, &buffsize, fp );
    }


    
    return 0;
}