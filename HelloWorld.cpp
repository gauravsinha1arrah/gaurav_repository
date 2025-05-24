#include <iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<int> int_vector;
    cout << "This is my first program" << endl;
    int_vector.push_back(10);

    cout << "Size of the vector: " << int_vector.size();
}