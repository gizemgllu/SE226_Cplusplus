#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int value){
        data=value;
        next=NULL;

    }
};

class queue {
public:
    int cnt;
    node *front;
    node *rear;

public:
    queue() {
        front = NULL;
        rear = NULL;
        cnt = 0;

    }

    void enqueue(int value) {
        node *q = new node(value);
        q->data = value;
        q->next = NULL;

        if (rear != nullptr) {
            rear = rear->next = q;
        } else {
            front = rear = q;
        }
        cnt++;
        cout<<"New node is added..."<<endl;
    }

    void dequeue(queue *q) {
        if (front == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        } else {
            cout << "Node is dequeued..." << endl;
            node *temp = front;
            front = front->next;
            delete temp;
            cnt--;

            if (front == NULL) {
                rear = NULL;
            }
        }
    }


    int top() {
        if (front!=NULL) {
            return front->data;
        }
        else {
            return -1;
        }
    }

    bool isEmpty() {
        return (front == NULL);
    }

    int size() { // or with just “cnt” variable we can calculate the size
        int size = 0;
        node *tmp = front;

        while (tmp != NULL) {
            size++;
            tmp = tmp->next;
        }

        return size;
    }

};

int main() {

    queue que;

    que.enqueue(10);
    que.enqueue(80);
    que.enqueue(90);
    que.enqueue(9568989);

    cout << "Queue size: " << que.size() << endl;
    cout << "Top element: " << que.top() << endl;

    cout<<"------------------------"<<endl;

    que.dequeue(&que);
    cout << "Queue size is: " << que.size() << endl;
    cout << "Top element is: " << que.top() << endl;

    cout<< que.isEmpty();


    return 0;
}

