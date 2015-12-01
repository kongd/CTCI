//check if a linkedlist is a palindrome

#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <stack>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

bool isPalindrome(Node* n1, Node* n2)
{
    stack<Node*> list;
    for (Node* n = n1; n != NULL; n = n->next)
    {
        list.push(n);
    }
    for (Node* itr = n2; itr != NULL; itr = itr->next)
    {
        Node* temp = list.top();
        list.pop();
        if (itr->value != temp->value)
        {
            return false;
        }
    }

    return true;

}

int main() {
    Node* a = new Node();
    a->value = 3;

    Node* aa = new Node();
    aa->value = 27;

    Node* aaa = new Node();
    aaa->value = 9;

    a->next = aa;
    aa->next = aaa;

    Node* b = new Node();
    b->value = 9;

    Node* bb = new Node();
    bb->value = 27;

    Node* bbb = new Node();
    bbb->value = 3;

    a->next = aa;
    aa->next = aaa;

    b->next = bb;
    bb->next = bbb;

    cout << isPalindrome(a, b) << endl;

    return 0;
}