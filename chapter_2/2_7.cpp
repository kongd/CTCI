//determine the node of intersection of 2 intersecting linkedlists (by reference)
//(all nodes after the intersection node are shared by the 2 lists.)

#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

Node* findIntersection(Node* n1, Node* n2)
{
    int listSize1 = 0;
    for (Node* n = n1; n != NULL; n = n->next)
    {
        ++listSize1;
    }

    int listSize2 = 0;
    for (Node* n = n2; n != NULL; n = n->next)
    {
        ++listSize2;
    }
    
    if (listSize1 - listSize2 > 0) //1 longer than 2
    {
        for (int i = 0; i < listSize1 - listSize2; ++i) //advance pointer to the same length as shorter list
        {
            n1 = n1->next;
        }
    }
    else //2 longer than 1
    {
        for (int i = 0; i < listSize2 - listSize1; ++i) //advance pointer to the same length as shorter list
        {
            n2 = n2->next;
        }
    }

    for (;n1 != NULL; n1 = n1->next, n2 = n2->next)
    {
        if (n1 == n2)
        {
            return n1;
        }
    }
}

int main() {
    Node* a = new Node();
    a->value = 15;

    Node* aa = new Node();
    aa->value = 3;

    Node* aaa = new Node();
    aaa->value = 5;

    Node* b = new Node();
    b->value = 10;

    Node* bb = new Node();
    bb->value = 7;

    Node* bbb = new Node();
    bbb->value = 9;

    // Node* c = new Node();
    // c->value = 6;

    // Node* cc = new Node();
    // cc->value = 8;

    Node* c = new Node();
    c->value = 7;

    Node* cc = new Node();
    cc->value = 6;

    ////////

    a->next = aa;
    aa->next = aaa;
    aaa->next = b;
    b->next = bb;
    bb->next = bbb;

    c->next = cc;
    cc->next = a;

    cout << "Intersection at " << findIntersection(a, c)->value << endl; //9 (aaa)


    return 0;
}