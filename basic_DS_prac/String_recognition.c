#include <stdio.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
    printf("Push : %c\n", ch);
}

char pop()
{
    char x;
    printf("Pop  : %c\n", stack[top]);
    x=stack[top];
    top--;
    return x;
}

int main()
{
    char str[SIZE];
    int i = 0;
    int cFound = 0;
    int valid = 1;
    char poped;
    printf("Enter string: ");
    scanf("%s", str);

    
    while(str[i]!='\0'&&str[i]!='C'){
        push(str[i]);
        i++;
    }
    if(str[i]=='C'){
        cFound=1;
        printf("C is found\n");
        i++;
    }else{
        valid=0; 
    }
    //pop char after c
    while(valid &&str[i]!='\0'){
        if(top==-1){
            valid=0;
            break;
        }
        poped=pop();
        if(poped!=str[i]){
            valid=0;
            break;
        }
        i++;
    }

    /* Final checking */
    if (valid == 1 && cFound == 1 && top == -1)
    {
        printf("\nString is VALID\n");
    }
    else
    {
        printf("\nString is INVALID\n");
    }

    return 0;
}
