//removes the kth to last element in a linkedlist

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

Node* KthLast(Node* head, int k)
{
    int size = 0; //assuming size not given
    for (Node* n = head; n != NULL; n = n->next)
    {
        ++size;
    }

    for (int i = 0; i < size - k; ++i)
    {
        head = head->next;
    }

    return head;
}

int main() {
    Node* a = new Node();
    a->value = 3;

    Node* aa = new Node();
    aa->value = 5;

    Node* aaa = new Node();
    aaa->value = 10;

    Node* aaaa = new Node();
    aaaa->value = 20;

    Node* aaaaa = new Node();
    aaaaa->value = 30;

    Node* aaaaaa = new Node();
    aaaaaa->value = 35;

    Node* aaaaaaa = new Node();
    aaaaaaa->value = 37;
    ////////

    a->next = aa;
    aa->next = aaa;
    aaa->next = aaaa;
    aaaa->next = aaaaa;
    aaaaa->next = aaaaaa;
    aaaaaa->next = aaaaaaa;
    aaaaaaa->next = NULL;

    Node* result = KthLast(a, 3);//find 30
    cout << result->value << endl;
    Node* result2 = KthLast(a, 1);//find 37
    cout << result2->value << endl;
    Node* result3 = KthLast(a, 7);//find 3
    cout << result3->value << endl;

    return 0;
}