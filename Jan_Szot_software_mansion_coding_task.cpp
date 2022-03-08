#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    if (a<3){
        if (a==2)
            return true;
        else
            return false;
    }
    else{
        int s=sqrt(a);
        if (s*s==a)
            return false;
        for(int i=3; i<s; i+=2){
            if (a%i==0)
                return false;
        }
    }
        return true;
///the function above checks if an argument is a prime number
}
vector<int> primes(vector<int> A, vector<int> B)
{
    map<int, int> M;
    ///that is where we are going to keep the B sequence
    ///Since I can choose the type of the sequences, they will be represented by vectors
    vector<int> C={};
    int b=0;
    ///of course the input method can be easily changed if needed
    while (B.size())
    {
        b=B.back();
        M[b]=M[b]+1;
        B.pop_back();
    }
    for(int i=0; i<A.size(); i++)
    {
        if (!isPrime(M[A[i]]))
            C.push_back(A[i]);
    }
    return C;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    vector<int> A={0},B={1,2,-3};
    vector<int> result = primes(A, B);
    for (int i=0; i<result.size(); i++)
        cout << result[i] << " ";
}
