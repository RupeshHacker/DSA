#include <stdlib.h>
#include <iostream>
// #include <conio.h>
#include <stdio.h>
using namespace std;

char *getString(){
    char* s1;
    int i = 0;
    s1=(char*) malloc (sizeof(char[50]));
    while((s1[i++]=getchar())!='\n');
    s1[--i]='\0';
    return s1;
}

void display(char *s){
    int i;
    for(i=0;s[i]!='\0';i++){
        cout<<s[i];
    }
    cout<<"\n";
}

int length (char *s){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

char *substring(char *s, int sp, int nc){
    char *t;
    int i;
    t = (char*) malloc (sizeof(char[50]));
    --sp;
    for(i=0;i<nc;sp++,i++){
        t[i]=s[sp];
    }
    t[i]='\0';
    return t;
}

char *reverse(char *s){
    int l = length(s);
    int i;
    int x =0;
    char *t =(char*) malloc(sizeof(char[50]));
    for(i=l;i>=0;i--,x++){
        t[x]=s[i];
    }
    t[x]='\0';
    return t;
}

int main(){
    char *s1,*s2,*s3,*s4;
    char ch;
    int sp,nc;
    cout<<"\n Enter string : ";
    s1=getString();
    cout<<"\n Your string is : "
    display(s1);
    do{
        cout<<"Enter your choice : ";
        cout<<"\n Option \t\t\t Choice";
        cout<<"\n Substring \t\t\t S";
        cout<<"\n Reverse \t\t\t R";
        cout<<"\n Length \t\t\t L";
        cout<<"\n Copy \t\t\t C";
    }while(strchar("SsRrLlCc",ch)==NULL);

    switch(ch){

    }
    return 0;
}