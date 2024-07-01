#include<bits/stdc++.h>
using namespace std;
template <typename T>

class stacks{
   private:
       T *stack;
       int n;
       int t=-1;
   public:
    stack(){
    n=5;
    stack=new T[n];
    }
    stacks (int n){
    this -> n=n;
    stack=new T[n];
    }

   bool isFull(){
   return t==n-1;

   }

   bool isEmpty(){
   return t==-1;


   }

   void push (T x){
   if(isFull()){
    cout<<"overflow\n";
   }else {
   stack[++t]=x  }

   }

   void pop(){
   if(isEmpty()){
    cout<<"underflow\n";
    }else{t--;}

   }

   void printStack(){

   }








};
