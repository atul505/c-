#include<iostream>
#include<algorithm>
using namespace std;
void PrintArray(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void alternate(int arr[] , int n){
    for(int i = 0 ; i < n ; i += 2){
        if( i+1 < n){
            swap(arr[i],arr[i+1]);

        }

    }
}




int main(){

int even[6] = {8 ,5,8,6,3,6};
int odd[5] = {2,3,6,8,4};

alternate(even,6);
alternate(odd,5);

PrintArray(even,6);
PrintArray(odd,5);



}
