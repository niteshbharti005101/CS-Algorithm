#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
 char pop()
{
        return stack[top--];
}
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '^')
    	return 3;
}
void main()
{
    char exp[20];
    char x;
    int e;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = 0;
    while(exp[e] != '\0')
    {
        if(isalnum(exp[e]))
            printf("%c",exp[e]);
        else if(exp[e] == '(')
            push(exp[e]);
        else if(exp[e] == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(exp[e]))
                printf("%c",pop());
            push(exp[e]);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
}