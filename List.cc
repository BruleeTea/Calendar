#include <iostream>
using namespace std;
#include <string>
#include "List.h"

List::List(){
    head =NULL;
}

List::~List(){
    Node *currNode, *nextNode;
    currNode =head;
    while (currNode != NULL){
        nextNode =currNode ->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }

}
void List::add(Event* newEvent){
    Node*   tmpNode;
    Node*    currNode;
    Node*   prevNode;

    tmpNode = new Node;
    tmpNode -> data =newEvent;
    tmpNode -> next = NULL;

    currNode =head;
    prevNode =NULL;
    while (currNode !=NULL){
        if(newEvent->lessThan(currNode->data))
                break;
        prevNode = currNode;
        currNode = currNode->next;
    }
    if (prevNode ==NULL){
        head =tmpNode;
    }
    else{
        prevNode->next =tmpNode;
    }
    tmpNode->next = currNode;
}
void List::print()
{
    Node* currNode =head;
    while(currNode !=NULL){
        currNode ->data->print();
        currNode = currNode->next;
    }

}
