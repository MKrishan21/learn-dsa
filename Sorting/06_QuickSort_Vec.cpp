#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &A, int start, int end)
{
    int pivot = A[end];
    int IndexPartition = start;
    for (int i = start; i < end; i++)
    {
        if (A[i] <= pivot)
        {
            swap(A[i], A[IndexPartition]);
            IndexPartition++;
        }
    }
    swap(A[IndexPartition], A[end]);
    return IndexPartition;
}
void QuickSort(vector<int> &A, int start, int end)
{
    if (start < end)
    {
        int IndexPartition = Partition(A, start, end);
        QuickSort(A, start, IndexPartition - 1);
        QuickSort(A, IndexPartition + 1, end);
    }
}

int main()
{
    vector<int> vec = {8, 6, -5, -2, 4, 3, 4, 7, 12, -1};
    int n = vec.size();
    QuickSort(vec, 0, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << vec[i] << ",";
    }

    return 0;
}