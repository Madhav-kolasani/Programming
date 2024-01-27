#include<iostream>
#include<stdlib.h>
using namespace std;
// int main(){
//     int *p,*q;
//     int i;
//     p = new int[5];
//     p[0] = 1;
//     p[1]=2;
//     p[2]=3;
//     p[3]=4;
//     p[4]=5;

//     q = new int[5];
//     for(int i=0;i<5;i++){
//         q[i] = p[i];
//     }
//     free(p);
//     p=q;
//     q=NULL;
//     for(int i=0;i<5;i++){
//         cout<<p[i];
//     }
// }

 //........................... ///////////////    MEARGING OF TWO ARRAYS     ///////////////////

// int main(){
//     int A[10],n1,n2,A2[10],arr[20];
//     int count = 0;
//     cout<<"enter the size: ";
//     cin>>n1;
//     for(int i=0;i<n1;i++){
//         cin>>A[i];
//         arr[count] = A[i];
//         count++;
//     }
//     cout<<"arr1: ";
//     for(int i=0;i<n1;i++){
//         cout<<A[i];
//     }
//     cout<<endl;
//     cout<<"enter size of n2: ";
//     cin>>n2;
//     for(int i=0;i<n2;i++){
//         cin>>A2[i];
//         arr[count] = A2[i];
//         count++;
//     }
//     cout<<"arr2: ";
//     for(int i=0;i<n2;i++){
//         cout<<A2[i];
//     }
//     cout<<endl;

//     cout<<"mearged array: ";
//     for(int i=0;i<count;i++){
//         cout<<arr[i];
//     }
// }

// class Array{
//     public:
//         int *A;
//         int size;
//         int lenght;
// };

// void display(struct Array arr){
//     // int n;
//     cout<<"displayed: ";
//     for(int i=0;i<arr.lenght;i++){
//         cout<<arr.A[i];
//     }
// }
// int main(){
//     Array arr;
//     cout<<"Enter the size of the array: ";
//     cin>>arr.size;
//     arr.A = new int[arr.size];
//     cout<<"Enter the length of the array: ";
//     cin>>arr.lenght;
//     for(int i=0;i<arr.lenght;i++){
//         cin>>arr.A[i];
//     }
//     display(arr);
// }

/*
  // .............................//////////////     PRIME NUMBERS    /////////////////////////

// int main(){
//     int num;
//     cout<<"Enter the num; ";
//     cin>>num;
//     bool is_prime = true;
//     for (int i=2;i<num;i++){
//         if(num%i==0){
//             is_prime = false;
//         }
//     }
//     if(num==1){
//         cout<<"it's not a prime num"<<endl;
//     }else if(is_prime == true){
//         cout<<"it's a prime num"<<endl;
//     }else if(is_prime == false){
//         cout<<"it's not a prime num";
//     }
// }

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i*i<= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    int start;
    cin>>start;
    int end;
    cin>>end;
    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    
}

*/
//...........................//////////////      APPEND    ///////////////////////////
/*
int main(){
    int arr[10],size;
    cout<<"Enter the size of the array";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Before insertion: ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"Enter the new element you want to insert: ";
    int n;
    cin>>n;
    arr[size] = n;
    size++;
    cout<<"After insertion: ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

 // SECOND METHOD  

struct Array{
        int A[10];
        int size;
        int lenght;
};

void display(struct Array arr){
    // int n;
    cout<<"displayed: ";
    for(int i=0;i<arr.lenght;i++){
        cout<<arr.A[i];
    }
}
void append(struct Array *arr,int x){
    if(arr->lenght<arr->size)
        arr->A[arr->lenght++] = x;
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    append(&arr,10);
    display(arr);
}

*/

 //   .........................................../////// INSERTION AT PERTICULAR INDEX //////


// struct Array{
//         int A[10];
//         int size;
//         int lenght;
// };

// void display(struct Array arr){
//     // int n;
//     cout<<"displayed: ";
//     for(int i=0;i<arr.lenght;i++){
//         cout<<arr.A[i];
//     }
// }

// void insert(struct Array *arr,int index, int x){
//     int i;
//     if(index>=0 && index<= arr->lenght){
//         for(i=arr->lenght;i>index;i--){
//             arr->A[i]=arr->A[i-1];
//         }
//         arr->A[index]=x;
//         arr->lenght++;
        
//     }
// }
// int main(){
//     struct Array arr={{2,3,4,5,6},10,5};
//     insert(&arr,0,4);
//     display(arr);
// }

 // SECOND METHOD;

// #include <iostream>
// using namespace std ;

// struct Array {
//     int A[10];
//     int size;
//     int length;
// };

// int main() {
//     struct Array arr = { {2, 3, 4, 5, 6}, 10, 5 };
//     // Display original array
//     cout << "Original array: ";
//     for (int i = 0; i < arr.length; i++) {
//         cout << arr.A[i] << " ";
//     }
//     cout << endl;

//     // Insert element at a specific index
//     int index = 0;
//     int x = 4;

//     if (index >= 0 && index <= arr.length) {
//         for (int i = arr.length; i > index; i--) {
//             arr.A[i] = arr.A[i - 1];
//         }
//         arr.A[index] = x;
//         arr.length++;
//     }
//     // Display array after insertion
//     cout << "Array after insertion: ";
//     for (int i = 0; i < arr.length; i++) {
//         cout << arr.A[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }



//         .................................... //////// DELETION ////////

// int main(){
//     int arr[]={1,2,3,3,4,5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int del = 2;
//     for(int i=del;i<len-1;i++){
//         arr[i]=arr[i+1];
//     }
//     len--;
//     for(int i=0;i<len;i++){
//         cout<<arr[i]<<" ";
//     }
// }

 // METHOD:-2

// struct Array {
//     int A[10];
//     int size;
//     int length;
// };
// void display(struct Array *arr){
//     for(int i=0;i<arr->length;i++){
//         cout<<arr->A[i]<<" ";
//     }
// };
// void del(struct Array *arr,int x){
//     if(x>=0 && x<=arr->length){
//     for(int i=x;i<arr->length-1;i++){
//         arr->A[i] = arr->A[i+1];
//     }
//     }
//     arr->length--;
// }
// int main(){
//     struct Array arr = {{1,2,3,4,5},10,5};
//     del(&arr,1);
//     display(&arr);
//     return 0;
// }

 //      ..................................... /////////  LINEARSEARCH  /////////

// struct Array {
//     int A[10];
//     int size;
//     int length;
// };
// void display(struct Array *arr){
//     for(int i=0;i<arr->length;i++){
//         cout<<arr->A[i]<<" ";
//     }
// };
// int linearsearch(struct Array arr, int key){
//     int i;
//     for (int i=0;i<arr.length;i++){
//         if(key==arr.A[i]){
//             return i;
//         }
//     }
//     return -1;
    
// }
// int main(){
//     struct Array arr = {{1,2,3,4,5},10,5};
//     cout<<linearsearch(arr,5)<<endl;
//     display(&arr);
// }

 // INPROVED LINEAR SEARCH...

// struct Array {
//     int A[10];
//     int size;
//     int length;
// };
// void display(struct Array *arr){
//     for(int i=0;i<arr->length;i++){
//         cout<<arr->A[i]<<" ";
//     }
// };

// void swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int linearsearch(struct Array *arr, int key){
//     int i;
//     for (int i=0;i<arr->length;i++){
//         if(key==arr->A[i]){
//                 swap(&arr->A[i],&arr->A[i-1]);
//                 return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     struct Array arr = {{1,2,3,4,5},10,5};
//     cout<<linearsearch(&arr,5)<<endl;
//     display(&arr);
// }

 //      ....................................... /////////  BINARYSEARCH  /////////

    // METHOD :- 1;

// struct Array {
//     int A[10];
//     int size;
//     int length;
// };
// void display(struct Array *arr){
//     for(int i=0;i<arr->length;i++){
//         cout<<arr->A[i]<<" ";
//     }
// };
// int BINARYSEARCH(struct Array arr, int key){
//     int l,mid,h;
//     l=0;
//     h=arr.length-1;
//     while(l<=h){
//         mid = (l+h)/2;
//         if(key == arr.A[mid]){
//             return mid;
//         }
//         else if(key<arr.A[mid]){
//             h = mid-1;
//         }
//         else if(key>arr.A[mid]){
//             l=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     struct Array arr = {{1,2,3,4,5},10,5};
//     cout<<BINARYSEARCH(arr,10)<<endl;
//     display(&arr);
// }

    // METHOD :-2

// struct Array {
//     int A[10];
//     int size;
//     int length;
// };
// void display(struct Array *arr){
//     for(int i=0;i<arr->length;i++){
//         cout<<arr->A[i]<<" ";
//     }
// };
// int BINARYSEARCH(int a[],int l, int h, int key){
//     int mid;
//     if(l<=h){
//         mid = (l+h)/2;
//         if(key == a[mid])
//             return mid;
//         else if(key<a[mid])
//             return BINARYSEARCH(a,l,mid-1,key);
//         else
//             return BINARYSEARCH(a,mid+1,h,key);
//     }
//     return -1;
// }
// int main(){
//     struct Array arr = {{1,2,3,4,5},10,5};
//     cout<<BINARYSEARCH(arr.A,0,arr.length,2)<<endl;
//     display(&arr);
// }


//...................//////////          Get( ) Set( ) Avg( ) Max( ) functions on Array       //////
/*
#include <iostream>
using namespace std;
struct array {
    int A[10];
    int size;
    int length;
};
int Get(struct array arr,int index){

    if(index>=0 && index <= arr.length){
        return arr.A[index];
        
    }
    return -1;
}

void set(struct array *arr,int index, int key){
    if(index>=0 && index<=arr->length){
        arr->A[index] = key;
    }

}

int max(struct array arr){
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max)
            max = arr.A[i];
    }
    return max;
}

int min(struct array arr){
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min)
            min = arr.A[i];
    }
    return min;
}

int sum(struct array arr){
    int sum =0;
    for(int i=0;i<=arr.length;i++){
        sum = sum+arr.A[i];
    }
    return sum;
}

float avg(struct array arr){
    return (float)sum(arr)/arr.length;
}
int main(){
    struct array arr= {{4,6,8,3,5,9,1,2,7,0},10,10};
    cout<<Get(arr,7)<<endl;
    set(&arr,0,4);
    cout<<"Max: "<<max(arr)<<endl;
    cout<<"Min: "<<min(arr)<<endl;
    cout<<"sum :"<<sum(arr)<<endl;
    cout<<"Avg: "<<avg(arr)<<endl;
}

*/

//..................  ..................///////////// REVERSE ////////////////
/*
struct array {
    int A[10];
    int size;
    int length;
};

void reverse(struct array *arr){
    int *b;
    int i,j;
    b = new int[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        b[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++){
        arr->A[i]=b[i];
    }
    for(int i=0;i<arr->length;i++){
        cout<<arr->A[i]<<" ";
    }
    cout<<endl;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse2(struct array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
    for(int i=0;i<arr->length;i++){
        cout<<arr->A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    struct array arr= {{4,6,8,3,5,9,1,2,7,0},10,10};
    reverse(&arr);
    reverse2(&arr);
}
*/