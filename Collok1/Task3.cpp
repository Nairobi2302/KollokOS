#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Функция для вывода связанного списка
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Функция для разворота связанного списка с использованием рекурсии
Node* reverseListRecursive(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* rest = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = nullptr;

    return rest;
}

int main() {
    // Создание примера связанного списка: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    std::cout << "Original list: ";
    printList(head);

    // Разворот связанного списка
    head = reverseListRecursive(head);

    std::cout << "Reversed list: ";
    printList(head);

    return 0;
}
