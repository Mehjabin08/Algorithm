#include<bits/stdc++.h>
using namespace std;

void printList(*p,int n){
for (int i=0;i<n,i++)
{
    cout<<p[i]<<endl;
}
cout << "\n---------------------"<<endl;

}
int *bubbleSort(int *p, int n)
for




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

