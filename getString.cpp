#include <stdlib.h>
#include <isostream.h>
#include <conio.h>
#include <stdio.h>
using namespace std:

char* getString(){
    char* s1;
    int i = 0;
    s1=(char*) malloc (sizeof(char[50]));
    while((s1(i++)=getChar())!='\n');
    s1[--i]='\0';
    return 1;
}

int length (char* s){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

