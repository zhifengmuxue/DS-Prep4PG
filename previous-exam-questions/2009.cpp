#include<iostream>

/**
 * 2009年真题
 * 单链表的倒数第k个结点
 * 给定一个单链表的头结点和一个整数last，要求输出单链表中倒数第last个结点的值。
 * 如果查找成功打印值并返回1，否则回0。
 * 
 * 时间复杂度 O(n) 空间复杂度 O(1)
 */

struct Node {
    int data;
    Node* link;
};

// 两次扫描（最高仅 10/15 分）
int findListLength(Node* head, int last){
    int length = 0;
    Node* current = head;
    while (current != NULL){
        length++;
        current = current->link;
    }
    // 先算总长
    if (length < last || last <= 0){
        return 0; 
    }

    // 取倒数第last个结点
    current = head;
    int idx = length-last;
    for (int i=0;i<idx;i++){
        current = current->link;
    }
    printf("last %d is %d",last ,current->data);
    return 1;
}

// 单次扫描，类似滑动窗口
int findListLength2(Node* head, int last){
    Node* p1 = head;
    Node* p2 = head;

    for (int i = 0; i<last; i++){
        if (p1 == NULL){
            return 0;
        }
        p1 = p1 -> link;
    }

    while (p1 != NULL){
        p1 = p1->link;
        p2 = p2->link;  
    }

    printf("last %d is %d", last, p2->data);
    return 1;
}

int main(){
    Node* head = new Node;
    head->data = 10;
    head->link = new Node;
    head->link->data = 20;
    head->link->link = new Node;
    head->link->link->data = 30;
    head->link->link->link = new Node;
    head->link->link->link->data = 40;
    head->link->link->link->link = new Node;
    head->link->link->link->link->data = 50;
    head->link->link->link->link->link = NULL;

    int last = 3;
    findListLength2(head, last);
    return 0;
}