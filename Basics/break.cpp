#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 10)
    {
        /*if(i==3){
            break;
        }*/
        if (i == 3)
        {
            i++;
            continue;
        }

        cout << "apna College" << endl;
    }
    return 0;
}