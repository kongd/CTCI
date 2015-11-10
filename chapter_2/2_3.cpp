//delete the middle node of a linkedlist, given only a pointer to it

#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

Node* deleteMiddle(Node* rem)
{
    rem->value = rem->next->value;
    rem->next = rem->next->next;
}

int main() {
    Node* a = new Node();
    a->value = 3;

    Node* aa = new Node();
    aa->value = 9;

    Node* aaa = new Node();
    aaa->value = 15;

    Node* aaaa = new Node();
    aaaa->value = 26;

    Node* aaaaa = new Node();
    aaaaa->value = 30;

    Node* aaaaaa = new Node();
    aaaaaa->value = 32;

    Node* aaaaaaa = new Node();
    aaaaaaa->value = 40;
    ////////

    a->next = aa;
    aa->next = aaa;
    aaa->next = aaaa;
    aaaa->next = aaaaa;
    aaaaa->next = aaaaaa;
    aaaaaa->next = aaaaaaa;
    aaaaaaa->next = NULL;

    deleteMiddle(aaa); //delete 15
    deleteMiddle(aaaaaa); //delete 32
    deleteMiddle(aa); //delete 9

    for (Node* n = a; n != NULL; n = n->next)
    {
        cout << n->value << " ";
    }
    cout << endl;

    return 0;
}