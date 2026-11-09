#include <iostream>


using namespace std;
 

int main(){
int N, A, B;
long long result=0;
cin>> N>> A >> B;



for (int i = 1; i<=N; i++){
int sum=0;
int temp=i;
while (temp){
    sum+=(temp%10);
    temp/=10;
}
if (sum>=A && sum<=B)
{
    result+=i;
}
}

cout<< result;


    
}