Doubly Linked List 

A Doubly Linked List is a data structure composed of nodes where each node consists of three parts: data,a pointer to the 
next node (next), and a pointer to the previous node (prev).This structure allows traversal in both forward and backward 
directions.

Key Points:

1. Node Structure: Each node in a doubly linked list contains data and two pointers - one pointing to the next node and the
other to the previous node.

2. Head and Tail: The head points to the first node, and the tail points to the last node of the list.These pointers 
facilitate efficient insertion and deletion operations.

3. Traversal: Traversal in a doubly linked list can be done both forwards and backwards, starting from either the head or
the tail.

4. Insertion: Nodes can be inserted at the beginning, end, or middle of the list.When inserting, pointers of adjacent nodes 
need to be updated to maintain connectivity.

5.Deletion: Nodes can be deleted from any position in the list. Similar to insertion, deletion involves updating pointers 
to ensure the list remains connected.

6. Advantages:
   - Allows bidirectional traversal.
   - Efficient insertion and deletion at both ends of the list.
   - Provides flexibility in data manipulation.

7.Disadvantages:
   - Requires extra memory for the previous pointers, increasing space overhead.
   - Slightly more complex implementation compared to singly linked lists.
