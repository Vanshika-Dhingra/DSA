# include "SLL.h"
# include <stdlib.h>
# include <assert.h>
# include <stdio.h>

position makeNode(int x)
{
    position p=(position)malloc(sizeof(listNode));
    p->element=x;
    p->next=NULL;

    return p;    
}

// void createEmptyList(list l)    the problem is that the changes that occur in the function itself are not reflected in the main
// {
//     l=makeNode(-1);
// }

list createEmptyList()
{
    list l;
    l=makeNode(-1);
    return l;
}

void insertIntoList_Begin(int x,list l)
{
    position p = makeNode(x);
    p->next=l->next;
    l->next=p;

}

void insertIntoList_End(int x,list l)
{
    position p = makeNode(x);
    p->next=NULL;
    while(l->next != NULL)
{
    l = l->next;
}
    l->next=p;
}

void insertAfter(int x,position k)
{
    position p = makeNode(x);
    p->next=k->next;
    k->next=p;
}

void Print(const list l)
{
    position currnode=l;
    while(currnode!=NULL){
        printf("%d\n",currnode->element);
        currnode=currnode->next;
    }
}

position find(int x,list l)
{
    position currnode=l;
    while(currnode!=NULL){
        if(currnode->element==x)
        {
            return currnode;
        }
        currnode=currnode->next;
    }
    return NULL;
}

void update(position p,int x)
{
    p->element=x;
}

void deleteElement(position prev_p)
{
    assert(prev_p!=NULL);
    position temp=prev_p->next->next;
    free(prev_p->next);
    prev_p->next=temp;
}

void emptyTheList(list l)
{
    position tmp=l->next;
    position tmp2;
    while(tmp!=NULL)
    {
        tmp2=tmp->next;
        free(tmp);
        tmp=tmp2;
    }
}

void sortList(list l)
{
    position currnode=l;
    while(currnode!=NULL)
    {
        if(currnode->element>currnode->next->element)
        {
            int temp=currnode->element;
            currnode->element=currnode->next->element;
            currnode->next->element=temp;
        }
        currnode=currnode->next;
    }
}