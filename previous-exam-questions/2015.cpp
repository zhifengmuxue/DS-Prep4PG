#include <iostream>
using namespace std;

/**
 * 用单链表保存m个整数，结点的结构为：｜data| link ｜, 且 | data | <= n
 * 现要求设计一个时间复杂度尽可能高效的算法，对于链表中data的绝对值相等的结点，
 * 仅保留第一次出现的结点，而删除其余绝对值相等的结点。
 * 
 * 时间复杂度 O(m) 空间复杂度 O(n)
 */

struct Node{
    int data;
    Node* link;
};

void removeTheSame(Node* head, int n){
    Node* current = head;
    Node* prev = nullptr;
    int* seen;
    seen = (int*) malloc(sizeof(int) * n + 1); 
    memset(seen, 0, sizeof(int) * (n + 1)); // 初始化数组，大小为n+1
    while(current != nullptr) {
        int num = current->data < 0 ? -current->data : current->data; // 取绝对值
        if (seen[num] == 0){
            seen[num] = 1;
            prev = current; // 保留前一个结点
        }else{
            if (prev != nullptr) {
                prev->link = current->link; // 删除当前结点
            }
            Node* toDelete = current; // 保存要删除的结点
            current = current->link; // 移动到下一个结点
            delete toDelete; // 删除当前结点
            continue; // 跳过当前循环，继续处理下一个结点
        }
        current = current->link;
    }
}

int main(){
    // 初始化一个链表
    Node* head = new Node{21, nullptr};
    head->link = new Node{-15, nullptr};
    head->link->link = new Node{-15, nullptr};
    head->link->link->link = new Node{-7, nullptr};
    head->link->link->link->link = new Node{15, nullptr};

    // 打印原链表
    cout << "Original list: ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->link;
    }
    cout << endl;

    removeTheSame(head, 5);

    // 打印处理后的链表
    cout << "Processed list: ";
    current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->link;
    }
    cout << endl;

    return 0;
}
