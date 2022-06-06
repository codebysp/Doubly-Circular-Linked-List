#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyCLL
{
private:
    PNODE head;
    PNODE tail;
    int CountNode;

public:
    DoublyCLL(); // Constructor
   
   // Insert Function Declaration 
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int, int);
    
    // Delete Function Declaration
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    
    // Traversal Function Declaration
    int Count();
    void Display();
};
