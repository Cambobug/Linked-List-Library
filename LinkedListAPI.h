#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Node{
    struct Node * next;
    struct Node * prev;
    void * data;
}Node;

typedef struct List{
    struct Node * head;
    struct Node * tail;
    int length;
    size_t dataSize;
}List;

//linked list functions
List * initializeList();
void pushBack(List * list, void * data);
void pushFront(List * list, void * data);
void * pop(List * list);
void toss(List * list, void (*deleteData)(void* data));
void deleteAtIndx(List * list, int index, void (*deleteData)(void *data));
void freeList(List * list, void (*deleteData)(void* data));
List * clone(List * list);
Node * peekNode(List * list, int index);
Node * pullNode(List * list, int index);
Node * peekFront(List * list);
Node * peekBack(List * list);

//misc functions
void headToTail(List * list);
int lenOfList(List * list);
bool isEmpty(List * list);
void dummyDelete(void * data);