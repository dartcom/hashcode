#include "parser.h"

#include <stdio.h>
#include <stdlib.h>


enum READING_ENUM reading_state;

int total_contributors;
int total_projects;

char * get_word(char * line){
    while(line != EOF){
        if(line == ' '){
            return line;
        }

        line++;
    }
    return NULL;
}


void process_line(char * line){
    if(reading_state == READING_HEADER){
        

    }else if(reading_state == READING_CONTRIBUTOR){


    }else if(reading_state == READING_SKILLS){


    }else if(reading_state == READING_PROJECT){


    }else if(reading_state == READING_PROJECT_REQUIREMENTS){


    }else{

    }


}