#include<iostream>
using namespace std;
class math
{
public:
    void prime()
    {
        int number;
        int check = 15;
        cin >> number;
        for(int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                check = 100;
                break;
            }
        }
        if(check == 15)
        {
            cout << "Prime Number" << endl;
        }
        else
        {
            cout << "Not Prime Number" << endl;
        }
    }
};
int main()
{
    math obj;
    obj.prime();
    return 0;
}
