#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size , int key){
    int start = 0;
    int end = size - 1;


    int mid = start + (end - start )/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        } //if key is greater from the mid element go to right side
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{ // if key is smaller from the mid element go to left side
            end = mid -1;
        }
        mid = start + (end - start )/2;

    }
    return -1;
}

int main(){

    int even[8] = {5 , 8 , 9 , 10 , 18 ,20 , 25 , 35};
    int odd[7] = {2 , 9 , 14 , 18 , 36 , 45 , 55};

    cout<<endl;

    int evenindex = BinarySearch(even,8 ,25);
    cout<<"index of 25 is : "<< evenindex <<endl;

    cout<<endl;

    int oddindex = BinarySearch(odd, 7 , 9);
    cout<<" index of 9 is : "<< oddindex <<endl;

    cout<<endl;

return 0;
}    
