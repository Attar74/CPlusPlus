#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int h;
    cin >> h;
    int spaces = h-1;
    int stares = 1;

    for (int i = 0; i < h; i++) {
        for(int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for(int j = 0; j < stares; j++) {
            cout << "*";
        }
        spaces--;
        stares+=2;
        cout << endl;
    }
    return 0;
}