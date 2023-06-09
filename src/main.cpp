#include <iostream>
#include <LinkedList.h>

int main()
{
    LinkedList my_linked_list;
    Node node;
    my_linked_list.insert(10);
    my_linked_list.insert(20);
    my_linked_list.print();
    my_linked_list.remove(10);
    my_linked_list.print();
    return 0;
}