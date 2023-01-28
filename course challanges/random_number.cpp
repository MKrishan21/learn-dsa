#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random_num{};
    int count{15};
    cout << RAND_MAX;
    srand(time(nullptr));
    for (int i = 1; i < count; ++i)
    {
        random_num = rand();
        cout << random_num << endl;
    }

    return 0;
}
