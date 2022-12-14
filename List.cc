#include "List.h"
List::List(){
  last = NULL;
}
List* List::append(int e){
  if(isEmpty()){
    last = new Node;
    last->data = e;
    last->next = last;
    return this;
  }
  Node* n = new Node;
  n->data = e;
  n->next = last->next;
  last->next = n;
  last = n;
  return this;
}
int List::head(){
  return last->next->data;
}
int List::size(){
  int c = 0;
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(iter == last)
      iter = NULL;
    c++;
  }
  return c;
}
List* List::appendkth(int e, int pos){
  if(isEmpty()){
    last = new Node;
    last->data = e;
    last->next = last;
    return this;
  }
  else{
    Node* n = new Node;
    n->data = e;
    Node* iter = last;
    int i = 0;
    while(pos-1 > i){
      iter = iter->next;
      i++;
    }
    n->next = iter->next;
    iter->next = n;       
  }  
  return this;
}
