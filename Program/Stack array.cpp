#include<stdio.h>
#include<stdlib.h>

struct element{ 
    char data; 
    struct element* next; 
};

void push(char data, struct element** stack){
    struct element* Element = (struct element*)malloc(sizeof(struct element)); 
    Element -> data = data; 
    Element -> next = *stack;  
    (*stack) = Element;  
}

void pop(struct element** stack){
    if(*stack != NULL){
        printf("Element popped: %c\n",(*stack) -> data);
        struct element* tempPtr = *stack;
        *stack = (*stack) -> next;
        free(tempPtr);
    }
    else{
        printf("The stack is empty.\n");
    }
}

void top(struct element* stack){
    if(stack != NULL){
    printf("Element on top: %c\n", stack -> data);
    }
    else{
        printf("The stack is empty.\n");
    }
}
int main() {
    struct element* root = (struct element*)malloc(sizeof(struct element));
    root -> data = 'a';
    root -> next = NULL;
    top(root);
    push('b',&root);
    top(root);
    push('c',&root);
    top(root);
    pop(&root);
    top(root);
    pop(&root);
    top(root);
    pop(&root);
    top(root);
    pop(&root);
    return 0;
}
