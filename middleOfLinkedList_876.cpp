#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Brute force
/*    
ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            size++;
            curr = curr->next;
        }

        ListNode* temp = head;
        for (int i = 1; i <= size / 2; i++) {
            temp = temp->next;
        }
        return temp;
    }
*/

//Slow fast pointer technique
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow; 
        // Return the middle node
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    ListNode* middle = solution.middleNode(head);

    cout << "Middle node value: " << middle->val << endl;

    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

