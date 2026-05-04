#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector <int> vNum = { 1 , 2 , 3 , 4 , 5 , 6};
    cout << vNum[0] << endl;
    vNum.push_back(10);
    if (!vNum.empty())
    {
        vNum.pop_back();
    }

    cout << "Numbers Vector =  "; 

    for (int &i : vNum)
    {
        cout << i << " ";
    }
    cout << endl;

    vNum.clear();


    for (int& i : vNum)
    {
        cout << i << " ";
    }
    cout << endl;



 
    
}

