class Queue
{
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;

public:
    Queue(int default_size = 10)
    {
        ms = default_size;
        arr = new int[ms];
        cs = 0;
        front = 0;
        rear = ms - 1;
    }

    bool full()
    {
        return cs == ms;
    }

    bool empty()
    {
        return cs == 0;
    }

    bool getfront()
    {
        return arr[front];
    }

    void push(int data)
    {
        if (!full())
        {
            // take rear to next index
            rear = (rear + 1) % ms;
            arr[rear] = data;
            cs++;
        }
    }

    void pop()
    {
        // move getfront to next index
        front = (front + 1) % ms;
        cs--;
    }
}
