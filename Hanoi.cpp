#include <iostream>
using namespace std;
void Hanoi(int n,char x,char y,char z)
{

        if(n)
        {
            Hanoi(n-1,x,z,y);
            cout << "Move one From " << x << " To " << y << endl;
            Hanoi(n-1,z,y,x);
        }
}
int main()
{
	int towerAmount = 0;
	cin >> towerAmount;
    Hanoi(towerAmount,'A','B','C');
    return 0;
}
