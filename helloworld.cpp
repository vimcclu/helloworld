#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    int i = 0;
    {
        cout << word << " ";
        ++i;
    }
    cout << endl;
}
