#include <iostream>
using namespace std;
int main() {
    float num=365,denom=365;
    int n=0;
    float p=1;
//probability to have diff birthday
    while(p>0.5)
    {
        p*=num/denom;
        num--;
        n++;
    }
    cout<<"Number of ppl to have 50% prob of diff birthday is:"<<n;
    return 0;
}
