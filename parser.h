#ifndef _PARSER_H_
#define _PARSER_H_
enum READING_ENUM {READING_HEADER, READING_CONTRIBUTOR, READING_SKILLS, READING_PROJECT, READING_PROJECT_REQUIREMENTS };






char * get_word(char * line);

void process_line(char * line);




#endif