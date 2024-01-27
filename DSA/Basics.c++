#include <iostream>
#include<stdio.h>
#include<stdlib.h> // for malloc function
using namespace std;

//                                //////////          POINTERS         ///////// 
   // pointer to a variable
// int main(){
//     int a = 10;
//     int *p;
//     p = &a;
//     cout<<a <<endl;
//     cout<< *p;
// }

 // Pointer to a array.

// int main(){
//   int A[5] = {2,3,4,5,6};
//   int *p;
//   p =A;
//   for(int i=0; i<5; i++){
//     cout <<p[i]<<endl;
//   }
//   return 0;
// }

  // Pointer by malloc function;

// int main(){
//   int *p;
//   p = (int *)malloc(5*sizeof(int));
//   p[0] = 10; p[1] = 20; p[2]=30; p[3]=40; p[4]=50;
//   for(int i=0;i<5;i++){
//     cout<<p[i]<<endl;
//   }
// }

  // DINAMIC PROGRAM..

// int main(){
//   int *p;
//   p = new int[5];
//   p[0]=10; p[1]=20; p[2]=30; p[3]=40; p[4]=50;
//   for(int i=0;i<5;i++){
//     cout<<p[i]<<endl;
//   }
//   delete []p; // in c++
//   // free(p);    // in c    languages.
// }

// int main(){
//   int *p1;
//   char *p2;
//   float *p3;
//   double *p4;
//   struct rectangle *p5;

//   cout<<sizeof(p1)<<endl;
//   cout<<sizeof(p2)<<endl;
//   cout<<sizeof(p3)<<endl;
//   cout<<sizeof(p4)<<endl;
//   cout<<sizeof(p5)<<endl;
// }

    //    REFERENCE

// int main(){
//   int a = 10;
//   int &r = a;
//   int b=45;
//   r=b;

//   cout<<a<<endl;
//   cout<<r<<endl;
// }

  // POINTERS TO STRUCTURE...


// struct rectangle{
//   int length;
//   int breadth;
// };
// int main(){
//   struct rectangle r={10,5};
//   struct rectangle *p = &r;
//   r.length = 15;
//   (*p).length = 20;  //To access the menbers in a function
//   p->length = 20;  // Another method to access the members.
// }

  //

// struct rectangle{
//   int length;
//   int breadth;
// };
// int main(){
//   struct rectangle *p;
//   p=(struct rectangle *)malloc(sizeof(struct rectangle));
//   p->length = 10;
//   p->breadth = 5;
// }

 // PRACTICE

// struct rectangle{
//   int length;
//   int breadth;
// };
// int main(){
//   rectangle r= {10,5};
//   cout<<r.length<<endl;
//   cout<<r.breadth<<endl;
//   rectangle *p = &r;
//   cout<<p->length<<endl;
//   cout<<p->breadth<<endl;
//   return 0;
// }

 //

// int main(){
// struct rectangle *p;
// p=(struct rectangle *)malloc(sizeof(struct rectangle));
// p->length = 15;
// p->breadth = 7;

// cout<<p->length<<endl;
// cout<<p->breadth<<endl;
// return 0;
// }

 // IN C++..........................................

// int main(){
//   struct rectangle *p;
//   p = new rectangle;
//   p->length = 15;
//   p->breadth = 9;
//   cout<<p->length<<endl;
//   cout<<p->breadth<<endl;
//   return 0;
// }

 //               //// FUNCTIONS......... ////

 // 1) PARAMETER PASSING
 //     i)  Pass by Value.
 //     ii) Pass by Address.
 //     iii) Pass by Reference
        

// int add(int a, int b){ //prototype

//   int c;
//   c = a+b;
//   return c;
// }
// int main(){
//   int x, y, z;
//   x = 10;
//   y= 5;
//   z = add(x,y);
//   cout<<"sum is "<<z<<endl;
// }

 //     PRACTIE FUNCTION

// int add(int a, int b){
//   int c;
//   c=a+b;
//   return c;
// }
// int main(){
//   int n1 = 10, n2 = 20, sum;
//   sum = add(n1,n2);
//   cout<<"Sum is: "<<sum<<endl;
// }

 // PARAMETER PASSING METHODS....

//                                      //call by value
// void swap(int x, int y){ // x and y are formal parameters.
//   int temp;
//   temp = x;
//   x = y;
//   y = temp;
//   cout<<x<<" "<<y<<endl;
// }
// int main(){
//   int a, b;
//   a = 10; b= 20;
//   swap(a,b);
// }

//                                                // CALL BY ADDRESS
// void swap();
// int main(){
//   int a, b;
//   a=10; b=20;
//   swap(a,b);
//   printf("%d %d", a,b);
// }
// void swap(int *x, int *y){
//   int temp;
//   temp = *y;
//   *y = *x;
//   *x = temp;
//   printf("%d %d",*x,*y);
// }

//                                                    // CALL BY REFERENCE

//* the actual parameters will change

// void swap(int &x, int &y){ // x and y are formal parameters.
//   int temp;
//   temp = x;
//   x = y;
//   y = temp;
//   cout<<x<<" "<<y<<endl;
// }
// int main(){
//   int a, b;
//   a = 10; b= 20;
//   swap(a,b);
// }

 // ARRAY AS A PARAMETER ...............

// void fun(int Arr[], int n){
//   int i;
//   for(i=0;i<n;i++){
//     printf("%d",Arr[i]);
//   }
// }
// int main(){
//   int Arr[5] = {2,3,4,5,6};
//   fun(Arr,5);
// }

 // ARRAY AS A PARAMETER

 // PASS BY VALUE in c language

// int *fun(int n){
//   int *p;
//   p=(int *)malloc(n *sizeof(int));
//   return (p);
// }

// int main(){
//   int *A;
//   A = fun(5);
// }

 //      PRACTICE OF THE PARAMETER ARRAY
// void fun(int *A, int m){
//   for(int i=0;i<m;i++){
//   cout<<A[i];
//   }
// }
// int main(){
//   int arr[]= {1,2,3,4,5};
//   int n = 5;
//   fun(arr,n);
//   // cout<<arr;
//   return 0;
// }

// int *fun(int size){
//   int *p;
//   p=new int[size];
//   for(int i=0;i<size;i++){
//     p[i]=i+1;
//   }
//   return p;
// }
// int main(){
//   int *ptr, sz=7;
//   ptr = fun(sz);
//   for(int i=0;i<sz;i++){
//     cout<<ptr[i]<<endl;
//   }
//   return 0;
// }

 
 //   //////// STRUCTURE AS PARAMETER .....  ///////
 // as a value;
// struct rectangle{
//   int len;
//   int bre;
// };
// void func(struct rectangle r1){
//   r1.len = 20;
//   cout<<"length: "<<r1.len<<endl<<"breadth: "<<r1.bre<<endl;
// }
// int main(){
//   struct rectangle r ={5,6};
//   cout<<"length: "<<r.len<<endl<<"breadth: "<<r.bre<<endl;
//   func(r);
// }

 // call by address

// struct rectangle{
//   int len;
//   int bre;
// };
// void func(struct rectangle *r1){
//   r1->len = 20;
//   cout<<"length: "<<r1->len<<endl<<"breadth: "<<r1->bre<<endl;
// }
// int main(){
//   struct rectangle r ={5,6};
//   func(&r);
//   cout<<"length: "<<r.len<<endl<<"breadth: "<<r.bre<<endl;
// }

 //creating object in heap memory

// struct Rectangle{
//   int length;
//   int breadth;
// };

// struct Rectangle *fun(){
//   struct Rectangle *p;
//   p = new Rectangle;
//   p->length = 15;
//   p->breadth = 7;
//   return p;
// }

// int main(){
//   struct Rectangle *ptr;
//   ptr = fun();
//   cout<<"Lenght: "<<ptr->length<<endl;
//   cout<<":breadth: "<<ptr->breadth<<endl;
//   return 0;
// }

 //SRUCTURE AND FUNCTIONS
 
  // in c language

// struct Rectangle{
//   int length;
//   int breadth;
// };

// void initialize(struct Rectangle *r, int l, int b){
//   r->length = l;
//   r->breadth = b;
// }

// int area(struct Rectangle r){
//   return r.length * r.breadth;
// }

// void changeLength(struct Rectangle *r, int l){
//   r->length = l;
// }

// int main(){
//   struct Rectangle r;
//   initialize(&r,10,5);
//   cout<<"Area is: "<<area(r)<<endl;
//   changeLength(&r,20);
//   cout<<"Length is: "<<r.length<<endl;
//   return 0;
// } 

  // in c++ language

// class Rectangle{
//   private:
//     int length;
//     int breadth;
//   public:
//     Rectangle(int l, int b){
//       length = l;
//       breadth = b;
//     }
//     int area(){
//       return length * breadth;
//     }
//     void changeLength(int l){
//       length = l;
//     }

// };
// int main(){
//   Rectangle r(10,5);
//   cout<<"Area is: "<<r.area()<<endl;
//   r.changeLength(20);
//   cout<<"Length is: "<<r.area()<<endl;
//   return 0;
// }

 // PRACTICE

// class rectangle{
//   private:
//     int len;
//     int bre;
//   public:
//     rectangle(){
//       len = 0;
//       bre = 0;
//     }
//     rectangle(int l, int b){
//       len = l;
//       bre = b;
//     }
//     int area(){
//       return len*bre;
//     }
//     int perimeter(){
//       return 2*(len+bre);
//     }
//     void setlenght(int l){
//       len = l;
//     }
//     void setbreadth(int b){
//       bre = b;
//     }
//     int gelength(){
//       return len;
//     }
//     int gebreadth(){
//       return bre;
//     }
//     ~rectangle(){
//       cout<<"destructor"<<endl;
//     }
// };
// int main(){
//   rectangle r(10,5);
//   cout<<"area: "<<r.area()<<endl;
//   cout<<"Perimeter: "<<r.perimeter()<<endl;
// }

 // Template class

template<class T>
class Arithmetic{
  private:
    T a;
    T b;
  public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
  this->a = a;
  this->b = b;
}

template<class T>
T Arithmetic<T>::add(){
  T c;
  c = a+b;
  return c;
}

template<class T>
T Arithmetic<T>::sub(){
  T c;
  c = a-b;
  return c;
}

int main(){
  Arithmetic<int> ar(10,5);
  cout<<ar.add()<<endl;
  cout<<ar.sub()<<endl;
  Arithmetic<float> ar1(1.5,1.2);
  cout<<ar1.add()<<endl;
  cout<<ar1.sub()<<endl;
  return 0;
}

