#include <iostream>
void push(char[], char);
char pop(char[]);
int top =-1;

int main(){
    char expr[50],ele,st[50];
    int i = 0,c = 0;
    
    std::cout<<"Enter the expression: ";
    while((expr[i++] = getchar()) != '\n');
    expr[--i] = '\0';

    for(i = 0; expr[i] != '\0'; i++){
        if(expr[i] == '(' || expr[i] == '{' || expr[i] == '['){
            push(st,expr[i]);
            c++;
        }
        else if(expr[i] == ')' || expr[i] == '}' || expr[i] == ']'){
            ele = pop(st);
            if((expr[i] == ')' && ele == '(') || (expr[i] == '}' && ele == '{') || (expr[i] == ']' && ele == '[')){
                c--;
            }
        }
    }
    return 0;
}

void push(char st[], char ele){
    st[++top] = ele;
}

char pop(char st[]){
    return st[top--];
}