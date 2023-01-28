#include <iostream>
#include <vector>
using namespace std;

int Max_SubArr_sum(vector<int> &v)
{
    int n = v.size();
    int CS = 0;
    int Largest = 0;
    for (int i = 0; i < n; i++)
    {
        CS += v[i];
        if (CS < 0)
        {
            CS = 0;
        }
        Largest = max(Largest, CS);
    }
    return Largest;
}

int main()
{
    vector<int> arr = {5, 8, -6, -2, 5, 12, -13, 3, 5};
    vector<int> a = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

    int Sub_ArrSum = Max_SubArr_sum(a);

    cout << Sub_ArrSum << endl;

    return 0;
}