#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*Declear 2 vector of integer named
     named vector 1 and 2 */

    vector<int> vector1;
    vector<int> vector2;

    /*add 10 and 20 to vector 1 dynamically
    using puch_back*/

    vector1.push_back(10);
    vector1.push_back(20);

    /*display elements in vector 1using at() method
    as well as its size using the size() method*/

    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements";

    /*add 100 and 200 to vector 2 dynamically
    using puch_back*/

    vector2.push_back(100);
    vector2.push_back(200);
    vector2.push_back(300);
    vector2.push_back(400);

    /*display elements in vector 2 using at() method
    as well as its size using the size() method*/

    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.at(2) << endl;
    cout << vector2.at(3) << endl;
    cout << "vector2 contains " << vector2.size() << " elements";

    /*declear an empty 2D vector called vector_2d*/

    vector<vector<int>> vector_2d;

    /*Add vector 1 to vector_2d dynamically using push_back
    Add vector 2 to vector_2d dynamically using push_back*/

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    /*Display the elements in vector using at()*/

    cout << vector_2d.at(0).at(1) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    return 0;
}