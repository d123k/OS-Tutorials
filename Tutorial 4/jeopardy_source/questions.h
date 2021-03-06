/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <GROUP MEMBERS>
 * All rights reserved.
 *
 */
 #ifndef QUESTIONS_H_
#define QUESTIONS_H_

#include <stdbool.h>

#define MAX_LEN 256

// List of 3 categories as array of strings
static char categories[3][MAX_LEN] = {"BasketBall", "Soccer", "Random"};

// Questions struct for each question
typedef struct {
    char category[MAX_LEN];
    char question[MAX_LEN];
    char answer[MAX_LEN];
    int value;
    bool answered;
} question;


extern question questions[12];

extern void initialize_game(void);

extern void display_categories(void);

extern void display_question(char *category, int value);

extern bool valid_answer(char *category, int value, char *answer);
extern bool already_answered(char *category, int value);

extern void question_answered(char *category, int value);

#endif 
