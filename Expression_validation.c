// Online C compiler to run C program online
#include <stdio.h>
#define max 50
char stack[max];
int top = -1;

void push(char n){
    top++;
    stack[top]=n;
    printf("push : %c\n",n);
}
char pop(){
    char ch;
    ch=stack[top];
    printf("pop : %c\n",ch);
    top--;
    return ch;
}

int main() {
    char string[] = "[({a+b)+c]";
    int i=0;
    char current_element;
    while(string[i] != '\0'){
        current_element = string[i];
        if(string[i] == '(' || string[i] == '[' || string[i] == '{'){
            push(string[i]);
        }
            else if(current_element == ')' || current_element == ']' || current_element == '}'){
                if(top == -1){
                    printf("Invalid 0");
                    break;
                }else if((stack[top] == '(' && current_element == ')') ||
                        (stack[top] == '[' && current_element == ']') ||
                        (stack[top] == '{' && current_element == '}')){
                    pop();
                    break;
                }else{
                    printf("\nInvalid1\n");
                    break;
                }
            }
     i++;   
    }
    if(top == -1){
        printf("valid\n");
    }else{
        printf("\nInvalid\n");
    }
    // Write C code here
   

    return 0;
}
