// Online C compiler to run C program online
#include <stdio.h>
#define max 50

char stack[max];
int top = -1;
int priority(char operator){
  if(operator == '%'|| operator == '/' || operator == '*'){
    return 2;
  }else if(operator == '+'|| operator == '-'){
    return 1;
  }else{
    return 0;
  }
}
void push(char n){
  top++;
  stack[top]=n;
  printf("push :%c\n",n);
}
char pop(){
    char ch;
    ch = stack[top];
    printf("pop :%c\n",ch);
    top--;
    return ch;
}
int main() {
    char expression[] = "a++b*c-d/";
    char postfix[max];
    int i=0;
    int j=0;

    while(expression[i] != '\0'){
        if(expression[i] >= 'a' && expression[i] <= 'z'){
            postfix[j]=expression[i];
            j++;
        }else{
            while(top != -1 && priority(stack[top]) >= priority(expression[i])){
                postfix[j]=pop();
                j++;
            }
          push(expression[i]);
        }
    i++;
    }
    while(top != -1){
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
    printf("Postfix : %s\n",postfix);
    return 0;
}
