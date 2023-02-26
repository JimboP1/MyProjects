#include <iostream>

using namespace std;

int main()
{
    int max = 300;

    for ( int min = 350; min <= max; min++)
    {
        int Num = min % 7;
       if(Num == 0)
       { 
       cout << min << endl;
       }

    }
    
    

    return 0;
}