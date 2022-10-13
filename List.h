#IFNDEF LIST_H
#DEFINE LIST_H
struct Node {
  int data;
  Node* next;
};
class List {
  public:
    List();
    List *append(int e);
    int head();
    List *tail();
    bool isEmpty();
  private:
    Node* last;  
};
#ENDIF
