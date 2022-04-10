#include<stdio.h>
# include "SLL.h"
#include<stdlib.h>

int main()
{

list l=createEmptyList();
//printf("%p\n",l);
position p=makeNode(-1);
insertIntoList_Begin(4,l);
insertIntoList_Begin(5,l);
insertIntoList_Begin(6,l);
insertIntoList_End(7,l);
insertAfter(8,l->next->next);
update(l->next->next,10);
position k=find(9,l);
//emptyTheList(l);
printf("%p\n",k);
//printf("%p\n",p);
//printf("%d\n",p->element);
//printf("%p\n",p->next);

//sortList(l);
Print(l);

return 0;
}