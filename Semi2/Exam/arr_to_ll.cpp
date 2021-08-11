#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Node {
    int value;
    Node* next;
};

struct Node* head = NULL;

struct Node* insert(struct Node* node, struct Node* tmp){
    
    if (head == NULL){
        head = node;
        head->next = NULL;
        
        tmp = head;
    } else {
        
        tmp = node;
        tmp->next = NULL;
        tmp = tmp->next;
    }
    
    return tmp;
}

struct Node* arrayToLL(int arr[], int size, struct Node* tmp){
    
    struct Node* node;
   
   for (int i = 0; i< size; i++){
       printf("%d\n", arr[i]);
       node = (struct Node*)malloc(sizeof(struct Node*));
       node->value = arr[i];
       tmp = insert(node, tmp);
   }
   
   return tmp;
}

void traverse(){
    
    while(head != NULL){
        
        printf("Value: %d\n", head->value);
        head = head->next;
    }
}

int main()
{
    
    struct Node* tmp = (struct Node*)malloc(sizeof(struct Node*));
    
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    
    int n = sizeof(arr) /  sizeof(arr[0]);
    
    arrayToLL(arr, n, tmp);

    traverse();

    return 0;
}

