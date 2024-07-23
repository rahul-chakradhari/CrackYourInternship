class twoStacks
{
public:
    int top1;
    int top2;
    int size;
    int *arr;

    twoStacks()
    {
        int n = 100;
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    void push1(int x)
    {
        top1++;
        arr[top1] = x;
    }

    void push2(int x)
    {
        top2--;
        arr[top2] = x;
    }
    int pop1()
    {
        if (top1 <= -1)
        {
            return -1;
        }
        return arr[top1--];
    }

    int pop2()
    {
        if (top2 >= size)
        {
            return -1;
        }
        return arr[top2++];
    }
};