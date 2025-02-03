#include <iostream>
#include <string>
const int ArSize = 10;

void strcount(const std::string &str);

int main()
{
    using namespace std;
    string str;
    cout << "Enter a line: ";
    getline(cin, str);
    while (str != "")
    {
        if(size(str) > 10) str = {str, 10};
        strcount(str);
        getline(cin, str);
    }

}

void strcount(const std::string &str)
{
    using namespace std;
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains " << size(str) << endl;
    total += size(str);
    cout << total << " characters total" << endl;
}