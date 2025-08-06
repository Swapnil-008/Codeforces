#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        unordered_set<int> uset;
        string str = to_string(x);
        for(int i = 0; i < str.length(); i++)
        {
            uset.insert(str[i]-'0');
        }
        for(int i = 0; i <= 9; i++)
        {
            if(uset.find(i) != uset.end())
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
