#include<bits/stdc++.h>
using namespace std;

void printList(*p,int n){
for (int i=0;i<n,i++)
{
    cout<<p[i]<<endl;
}
cout << "\n---------------------"<<endl;

}
int *shiftLeft(int *A,int n,int k)
for (int j=0;j<k;){
    for (int i=0;i<n-1;i++)
        A[i]=A[i+1];
}
for (int i=n-k;i<n;i++)
{

}
{

}

}
int main(){
int n=20;
int *a=new int[n];
ifstream fin("20k-shift.txt");

//read from file and save in array
for (int i=0;i<n;i++)
{
    fin>>a[i];
}
   printList (a,n);
   int *m=shiftLeft(a,n,10);
   printList(m,n);



}

