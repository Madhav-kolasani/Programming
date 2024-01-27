// #include <iostream>
// using namespace std;
// struct Array{
//     int A[10];
//     int size;
//     int length;
// };
// void display(struct Array *arr){
//     cout<<"original array: ";
//     for(int i=0;i<arr->length;i++){
//         cout<<arr->A[i]<<" ";
//     }
// }
// void append(struct Array arr,int key){
//     arr.A[arr.length] = key;
//     arr.length++;
//     cout<<"appended value: ";
//     for(int i=0;i<arr.length;i++){
//         cout<<arr.A[i]<<" ";
//     }
//     cout<<endl;
// }
// void insert(struct Array arr,int index, int key){
//     for(int i=arr.length;i>index;i--){
//         arr.A[i]= arr.A[i-1];
//     }
//     arr.A[index] = key;
//     arr.length++;
//     cout<<"inserted value: ";
//     for(int i=0;i<arr.length;i++){
//         cout<<arr.A[i]<<" ";
//     }
//     cout<<endl;
// }
// void del(struct Array arr,int index){
//     for(int i=index;i<arr.length-1;i++){
//         arr.A[i]=arr.A[i+1];
//     }
//     arr.length--;
//     cout<<"Deletion: ";
//     for(int i=0;i<arr.length;i++){
//         cout<<arr.A[i]<<" ";
//     }
//     cout<<endl;
// }
// void linear(struct Array arr, int key){
//     cout<<"In linear -> "
//     for(int i=0;i<arr.length;i++){
//         if(key==arr.A[i]){
//             cout<<"At this index: "<<i<<endl;
//         }
//     }
// }
// void binary(struct Array arr,int key){
//     int low=0, high=arr.length-1, mid;
//     cout<<"In binary -> ";
//     while(low<=high){
//         mid = (low+high)/2;
//         if(key == arr.A[mid]){
//             cout<<"At the index of: "<<mid<<endl;;
//             return;
//             // cout<<endl;
//         }else if(key>arr.A[mid]){
//             low = mid+1;
//         }else if(key<arr.A[mid]){
//             high=mid-1;
//         }
//     }
//     cout<<"Key isn't present";
// }
// int main() {
//     struct Array arr={{1,2,3,4,5},10,5};
//     append(arr,6);
//     insert(arr,0,0);
//     del(arr,0);
//     linear(arr,2);
//     binary(arr,2);
//     display(&arr);
//     return 0;
// }


// Get( ) Set( ) Avg( ) Max( ) functions on Array
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