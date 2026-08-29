// Online C compiler to run C program online
#include <stdio.h>
#define max 5
int c_queue[max];
int rear = -1;
int front = -1;

void enqueue(int n){
   
    if((rear+1)%max == front){
        printf("Queue is Full\n");
    }
    else if(front == -1){
        front=0;
        rear=0;
    }else{
        rear = (rear+1) % max;
        c_queue[rear]=n;
        printf("Enque :%d\n",n);
     }
}
int dequeue(){
    int item;
    if(front == -1){
        printf("Queue is empty\n");
    }
    item = c_queue[front];
    if(front == rear){
      front = -1;
      rear = -1;
    }else{
        front = (front + 1) % max;
         printf("Dequeue :%d\n",item);
    }
    return item;
}
void display(){
    int i = 0;
    if(front == -1){
        printf("Queue is empty\n");
    }
    printf("Queue Element :\n");
    for(i = front;;i=(i+1) % max){
        printf("%d\n",c_queue[i]);
        if(i == rear){
            break;
        }
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
    if((rear+1) % max == front){
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
