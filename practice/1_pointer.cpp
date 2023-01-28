#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    // int a = 100;
    // int *b = &a;

    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // *b = 200;
    // cout << a << "\n"
    //      << *b << endl;

    // vector<string> stooges{"ram", "sam", "mam"};
    // vector<string> *vec_ptr{nullptr};

    // vec_ptr = &stooges;
    // cout << "vec_ptr " << vec_ptr << endl;
    // cout << "at first " << (*vec_ptr).at(0) << endl;

    // cout << "stooges : ";
    // for (auto stooge : *vec_ptr)
    // {
    //     cout << stooge << " ";
    // }

    /*............................................*/

    // int arr[] = {100, 200, 300};
    // cout << "arr address " << arr << endl;

    // int *arr_ptr{arr};
    // cout << "arr_ptr address " << arr_ptr << endl;

    // cout << arr_ptr[0] << endl;     // 100
    // cout << *arr_ptr << endl;       // 100
    // cout << *(arr_ptr + 1) << endl; // 200
    // cout << *arr + 1 << endl;       // 101

    // while (*arr_ptr <= 300)
    // {
    // cout << *arr_ptr << " "; // 100 200 300
    // arr_ptr++;
    // or
    // cout << *arr_ptr++ << " ";  // 100 200 300
    // cout << (*arr_ptr)++ << " ";   // 100 200 300......300
    // }

    /*.......................................*/

    // string s1{"kittu"};
    // string s2{"pankaj"};
    // string s3{"kuku"};

    // string *p1(&s1);
    // string *p2(&s2);
    // string *p3(&s3);

    // cout << boolalpha;

    // cout << *p1 << "==" << *p2 << (p1 == p2) << endl;  //false
    // cout << p1 << "==" << p2 << (p1 == p2) << endl;    //false
    // cout << *p1 << "==" << s1 << (p1 == &s1) << endl;  //true

    /*...........................*/

    // char name[]{"KITTU"};
    // char *pt_1{NULL};
    // char *pt_2{NULL};

    // pt_1 = &name[1];
    // pt_2 = &name[4];

    // cout << *pt_1 << " is " << (pt_2 - pt_1) << " char away from " << pt_2;

    /*[----------------------------------------------]*/

    vector<string> v{"Kittu", "Pankaj", "Kuku"};

    for (auto i : v)
        i = "yoyo";

    for (auto i : v)
        cout << i << " " << endl;

    for (auto &i : v)
        i = "yoyo";

    for (auto i : v)
        cout << i << " ";

    return 0;
}