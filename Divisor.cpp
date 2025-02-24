#include <iostream>
using namespace std;
class number
{
public:
    void divisors()
    {
        int n;
        cin>>n;
        for(int i = 2; i <= n/2; i++)
        {
            if(n%i == 0)
            {
                cout<<i<<endl;
            }
        }
    }
};
int main()
{
    number obj;
    obj.divisors();
    return 0;
}
