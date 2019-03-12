#include<iostream>  
using namespace std;  
int f(int n)  
{  
    int num=0;  
    for(int i=2;i<n;i++)  
    {  
        if(n%i==0)  
        {  
            num++;  
            num+=f(n/i);  
        }  
    }  
    return num;  
}  
int main()  
{  
    cout<<f(12)+1<<endl;  
    return 0;  
}  