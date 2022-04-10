# ifndef _SLL_H
# define _SLL_H

typedef struct Node listNode;
typedef struct Node* position;
typedef struct Node* list;

struct Node {
    int element;
    position next;
};

position makeNode(int x);
//void createEmptyList(list l);
list createEmptyList();

void insertIntoList_Begin(int x,list l);
void insertIntoList_End(int x,list l);
void insertAfter(int x,position p);

position find(int x,list l);
void update(position p,int x);

void deleteElement(position prev_p);
void emptyTheList(list l);

void Print(const list l);
void sortList(list l);

# endif