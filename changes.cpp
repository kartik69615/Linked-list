#include <bits/stdc++.h>

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;

     ListNode(int data)
     {
         val = data;
         next = NULL;
     }
 };

 void print(ListNode* root)
{
    while(root != NULL)
    {
        cout << root -> val << " ";
        root = root -> next;
    }

    cout << endl;
    return;

}

ListNode* insertNode(ListNode* root , int pos , int data)
{
    ListNode* newNode = new ListNode(data);

    if(pos == 1)
    {
        newNode -> next = root;
        return newNode;
    }

    ListNode* curr = root;

    for(int i=1 ; i <= pos - 2 && curr != NULL ; i++)
    {
        curr = curr -> next;
    }

    if(curr == NULL)
    {
        return root;
    }

    ListNode* temp = curr -> next;
    curr -> next = newNode;
    newNode -> next = temp;

    return root;

}

int main()
{
    ListNode* root = new ListNode(10);
    root -> next = new ListNode(20);
    root -> next -> next = new ListNode(30);


    ListNode* newNode = insertNode(root , 1 , 40);
    print(newNode);

    return 0;
}
