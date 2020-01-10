#include <iostream>
#include<algorithm>
using namespace std;

int ind_currency[]={1,2,5,10,20,50,100,200,500,2000};
int n=sizeof(ind_currency)/sizeof(int);

bool fun(int a,int b){ return a<=b;}

void count_notes(int money){
    if(money==0)
        return;
    
    //lower bound will return an iterator
    //log(T), where T is total no of coins/notes you have
    int largest_index=lower_bound(ind_currency,ind_currency+n,money,fun)-ind_currency-1;
    cout<<ind_currency[largest_index]<<" ";
    
    count_notes(money-ind_currency[largest_index]);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int money;
        cin>>money;
        count_notes(money);
        cout<<endl;
    }
	// your code goes here
	return 0;
}
