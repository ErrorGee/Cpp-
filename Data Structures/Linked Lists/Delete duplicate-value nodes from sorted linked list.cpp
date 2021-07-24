/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 * For your reference:
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };*/

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if (!llist){
        return llist;
    }
    SinglyLinkedListNode* Curr= llist;
    if (Curr->next==NULL){
        return llist;
    }
    while(Curr!=NULL && Curr->next!=NULL){
        while(Curr->next!=NULL && Curr->data==Curr->next->data){
            Curr->next=Curr->next->next;
        }
        if (Curr->next!=NULL){
            Curr=Curr->next;
        }
    }
    return llist;
}


