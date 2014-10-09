#include "linklist.h"

LinkList::LinkList()
{
  headptr = NULL;
}

LinkList::~LinkList()
{
  node *temp;
  while( headptr != NULL )
  {
    temp = headptr;
    headptr = headptr -> next;
    delete temp;
  }
  
}
