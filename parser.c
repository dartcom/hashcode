#include "parser.h"

#include <stdio.h>
#include <stdlib.h>


enum READING_ENUM reading_state;

int total_contributors;
int total_projects;

int current_contributor = 0;
char current_contributor_name[20];

int current_skills = 0;
char current_skill_name[20];


int current_project = 0;







void process_line(char * line){
   
    if(reading_state == READING_HEADER){
        sscanf( line, "%d %d", total_contributors, total_projects );
        reading_state = READING_CONTRIBUTOR;

    }else if(reading_state == READING_CONTRIBUTOR){
        sscanf( line, "%s %d", current_contributor_name, current_skills );
        reading_state = READING_SKILLS;

    }else if(reading_state == READING_SKILLS){
        

        
    }else if(reading_state == READING_PROJECT){


    }else if(reading_state == READING_PROJECT_REQUIREMENTS){


    }else{

    }


}