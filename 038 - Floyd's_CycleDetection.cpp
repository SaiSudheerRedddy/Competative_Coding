class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* slow = head;
        Node* fast = head->next;
        while(fast != slow){
            
            if(!fast || !fast->next){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;

        }
        return true;
    }
};
