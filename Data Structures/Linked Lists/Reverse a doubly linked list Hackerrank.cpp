

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if (!llist)
    return llist;
    DoublyLinkedListNode* Curr=llist;
    if (Curr->next==NULL)
    return llist;
    
    while (Curr!=NULL){
        DoublyLinkedListNode* Prev=Curr->prev;
        Curr->prev=Curr->next;
        Curr->next=Prev;
        Curr=Curr->prev;
        
        if (Prev!=NULL){
            llist=Prev->prev;
        }
    
    }
    return llist;
   
}

