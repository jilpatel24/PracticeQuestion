// Online C compiler to run C program online
#include <stdio.h>
#define max 50
int queue[max];
int rear = -1;
int front = -1;

void enqueue(int n){
   
    if(rear == max-1){
        printf("Queue is Full\n");
    }
    if(front == -1){
        front=0;
    }
    rear++;
    queue[rear]=n;
    printf("Enque :%d\n",n);
}
int dequeue(){
    int item;
    if(front == -1){
        printf("Queue is empty\n");
    }
    item = queue[front];
    if(front == rear){
      front = -1;
      rear = -1;
    }else{
        printf("Dequeue :%d\n",item);
        front++;
    }
    return item;
}
void display(){
    int i = 0;
    if(front == -1){
        printf("Queue is empty\n");
    }
    printf("Queue Element :\n");
    for(i=0;i<rear;i++){
        printf("%d\n",queue[i]);
    }
}
void isEmpty(){
    if(front == -1){
        printf("Queue is empty\n");
    }else{
        printf("Queue is not empty\n");
    }
}
void isFull(){
    if(rear == max-1){
        printf("Queue is full\n");
    }else{
       printf("Queue is not full\n"); 
    }
}

int main() {
    int ch;
    int num;
  
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display\n");
    printf("4.IsEmpty\n");
    printf("5.IsFull\n");
  

    do{
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:
             printf("Enter num for enqueue :");
             scanf("%d",&num);
              enqueue(num);
              break;
            case 2:
              dequeue();
              break;
            case 3:
              display();
              break;
            case 4:
              isEmpty();
              break;
            case 5:
              isFull();
              break;
          
            default:
              printf("Invalid choice");
              break;
        }
    }while(ch!=6);
    return 0;
}
