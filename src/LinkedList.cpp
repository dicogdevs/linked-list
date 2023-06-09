#include <iostream>
#include <LinkedList.h>

LinkedList::LinkedList() : head(nullptr) {}
LinkedList::~LinkedList()
{
    Node *current = head;

    while (current)
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void LinkedList::insert(int data)
{
    Node *node = new Node;
    node->data = data;
    node->next = nullptr;
    if (this->head)
    {
        Node *current = this->head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = node;
    }
    else
    {
        this->head = node;
    }
}

void LinkedList::remove(int data)
{
    Node *current = this->head;
    Node *previus = nullptr;

    while (current)
    {
        if (current->data == data)
        {
            if (previus)
            {
                previus->next = current->next;
            }
            else
            {
                this->head = current->next;
            }
            delete current;
            return;
        }
        else
        {
            previus = current;
            current = current->next;
        }
    }
}

void LinkedList::print() const
{
    Node *current_node = this->head;

    while (current_node != nullptr)
    {
        std::cout << current_node->data << "--";
        current_node = current_node->next;
    }
    std::cout << "\n";
}