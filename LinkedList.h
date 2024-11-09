#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<Word.h>
class LinkedList
{
public:
    Word *head;
    Word *tail;
    int size;

    LinkedList();


    void addToList(T data);
    void printList();

   // void insertAtBeginning(T data);
    //void insertAtEnd(T data);
    //void insertAtPosition(T data, int position);
   // void deleteAtBeginning();
   // void deleteAtEnd();
   // void deleteAtPosition(int position);
    bool search(T data);
};
#endif // LINKEDLIST_H
