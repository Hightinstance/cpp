#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


int main(void)
{
    vector<int> a= {1,2,3,4};

    for( auto elem : a )
    {
        cout<< elem << endl;
    }
    system("pause");
    return 0;

}