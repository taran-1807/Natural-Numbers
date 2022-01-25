#include <iostream>
using namespace std;

int sumOfNatural(int n){
    
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sumOfNatural(n)<<endl;
   
   return 0;
}
