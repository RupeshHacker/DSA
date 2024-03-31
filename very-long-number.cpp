#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string.h>
using namespace std;
struct veryLongNumber
{
    int data;
    veryLongNumber *node;
};
void insert();
void display();
// void add();

int main()
{
    struct veryLongNumber *num1 = new veryLongNumber;
    struct veryLongNumber *num2 = new veryLongNumber;
    num1 = NULL;
    num2 = NULL;
    // num1.insert();
    // num2.insert();
    return 0;
}

void insert()
{
    int n;
    veryLongNumber *temp = new veryLongNumber;
    cout << "Enter the number: ";
    cin >> n;
    temp->data = n;
    temp->node = NULL;
}

void display()
{
    veryLongNumber *temp = new veryLongNumber;
    cout << "The number is: ";
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->node;
    }
}