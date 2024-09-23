//
// Created by 86138 on 2024/9/21.
//

#ifndef LINKED_LINKED_H
#define LINKED_LINKED_H
template <typename T>
class Linked{

protected:
    struct Node{
        T data;
        Node* next;
    };
    Node* head;
    long length;
public:
//    create one empty object of Linked
    Linked():head(nullptr),length(0){};
//    return the Linked object's size
    long getSize()const{return length;};
//    let the Node insert into the first place of Linked
    void push_front(T item);
    class Iterator{
        friend class Linked<T>;
        public:
        Iterator(Node* newPtr){nodePtr=newPtr;};
        protected:
        Node* nodePtr;
    };
    Iterator* operator++(int){
        return this->nodePtr->next;
    }
//    override the operator ++

//    override the operator ==
//    override the operator !=
//    return the first element of Iterator
//    return the last element of Iterator
};
template <typename T>
void Linked<T>::push_front(T item){
    Node* newNodePtr=new Node;
    newNodePtr->data=item;
    newNodePtr->next=head;
    head=newNodePtr;
    delete newNodePtr;
    length++;
}
#endif //LINKED_LINKED_H
