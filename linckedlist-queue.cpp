#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct node {
    int info;
    struct node *next;
};

struct node *front, *rear;
void insert(int);
int del();
void display();

int main() {
    int choice;
    front = NULL;
    rear = NULL;
    while (1) {
        cout << "1.Insert element to queue" << endl;
        cout << "2.Delete element from queue" << endl;
        cout << "3.Display all elements of queue" << endl;
        cout << "4.Quit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to be inserted: ";
                int n;
                cin >> n;
                insert(n);
                break;
            case 2:
                if(front == NULL) {
                    cout << "Queue is empty" << endl;
                } else {
                    int d = del();
                    cout << "Deleted element is: " << d << endl;
                }
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                cout << "Wrong choice" << endl;
        }
    }
    return 0;
}

void insert(int item) {
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = item;
    tmp->next = NULL;
    if(front == NULL) {
        front = tmp;
    } else {
        rear->next = tmp;
    }
    rear = tmp;
}

int del() {
    struct node *tmp;
    int item;
    tmp = front;
    item = tmp->info;
    front = front->next;
    free(tmp);
    return item;
}

void display() {
    struct node *p;
    if(front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    p = front;
    cout << "Queue elements: " << endl;
    while(p != NULL) {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
}