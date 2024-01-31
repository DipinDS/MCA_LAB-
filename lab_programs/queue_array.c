#define MAX_SIZE 100  
#include<stdio.h>
#include<stdlib.h>  
int queue[MAX_SIZE];  
int front = -1;  
int rear = -1;  
int i;
  
void enqueue(int element) {  
    if (rear == MAX_SIZE - 1) {  
        printf("Queue is full");  
        return;  
    }  
    if (front == -1) {  
        front = 0;  
    }  
    rear++;  
    queue[rear] = element;  
}  
  
int dequeue() {  
    if (front == -1 || front > rear) {  
        printf("Queue is empty");  
        return -1;  
    }  
    int element = queue[front];  
    front++;  
    return element;  
}  

int display() {
    if(front == -1) {
        printf("empty!");
        return 0;
    }
    printf("Queue elements : ");
    for ( i = front ; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
}  

int main() {  
    enqueue(10);  
    enqueue(20);  
    enqueue(30);
    enqueue(40);  
    enqueue(50);
    enqueue(60);
    printf("%d ", dequeue());  
    printf("%d ", dequeue());  
    printf("%d ", dequeue());  
    display();
    return 0;  
}  