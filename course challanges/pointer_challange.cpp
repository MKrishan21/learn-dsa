// multiplying 2 arrays using pointers function

#include <iostream>
using namespace std;

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    int *new_array{};

    new_array = new int[size1 * size2];

    int position{0};
    for (size_t i{0}; i < size2; ++i)
    {
        for (size_t j{0}; j < size1; ++j)
        {
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}

/*---------------------------*/

void print(const int *const arr, size_t size)
{
    cout << "[";
    for (int i = 0; i < size; ++i)

        cout << arr[i] << " ";
    cout << "]";
    cout << endl;
}

/*-----------------------------*/

int main()
{
    const size_t arr1_size{5};
    const size_t arr2_size{3};

    int array1[]{3, 4, 5, 6, 7};
    int array2[]{10, 20, 30};

    cout << "Array 1 :" << endl;
    print(array1, arr1_size);

    cout << "Array 2 :" << endl;
    print(array2, arr2_size);

    int *results = apply_all(array1, arr1_size, array2, arr2_size);
    constexpr size_t results_size{arr1_size * arr2_size};

    cout << "Result: ";
    print(results, results_size);

    delete[] results;
    cout << endl;
    return 0;
}