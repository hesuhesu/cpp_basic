#include <iostream>
#include <cstdlib>
using namespace std;

// Queue�� �⺻ �뷮 ����
#define SIZE 1000

// Queue�� ������ Ŭ����
class Queue
{
    int* arr;       // Queue ��Ҹ� ������ ���
    int capacity;   // Queue�� �ִ� �뷮
    int front;      // ���� Queue�� �� ��Ҹ� ����ŵ�ϴ�(�ִ� ���).
    int rear;       // �ĸ��� Queue�� ������ ��Ҹ� ����ŵ�ϴ�.
    int count;      // Queue�� ���� ũ��

public:
    Queue(int size = SIZE);     // ������
    ~Queue();                   // �Ҹ���

    int dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

// Queue�� �ʱ�ȭ�ϴ� ������
Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

// Queue�� �Ҵ�� �޸𸮸� �����ϴ� �Ҹ���
Queue::~Queue() {
    delete[] arr;
}

// �� ��Ҹ� ť���� ���� ��ƿ��Ƽ �Լ�
int Queue::dequeue()
{
    // Queue ����÷� Ȯ��
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    int x = arr[front];
    cout << "Removing " << x << endl;

    front = (front + 1) % capacity;
    count--;

    return x;
}

// Queue�� �׸��� �߰��ϴ� ��ƿ��Ƽ �Լ�
void Queue::enqueue(int item)
{
    // Queue �����÷� Ȯ��
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting " << item << endl;

    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

// Queue�� �� ��Ҹ� ��ȯ�ϴ� ��ƿ��Ƽ �Լ�
int Queue::peek()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}

// Queue�� ũ�⸦ ��ȯ�ϴ� ��ƿ��Ƽ �Լ�
int Queue::size() {
    return count;
}

// Queue�� ��� �ִ��� Ȯ���ϴ� ��ƿ��Ƽ �Լ�
bool Queue::isEmpty() {
    return (size() == 0);
}

// Queue�� ���� á���� Ȯ���ϴ� ��ƿ��Ƽ �Լ�
bool Queue::isFull() {
    return (size() == capacity);
}

int main()
{
    // �뷮�� 5�� Queue ����
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "The front element is " << q.peek() << endl;
    q.dequeue();

    q.enqueue(4);

    cout << "The queue size is " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }

    return 0;
}
