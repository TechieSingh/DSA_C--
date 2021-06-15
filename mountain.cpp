#include<iostream>
#include<vector>
using namespace std;

int findpeek(vector<int> arr){
    int n= arr.size();
    int largest;
    for (int i = 1; i <n-2;)
    {
       
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){ 
            cout<<arr[i];
            i++;
        }
        else
        i++ ; 
    }
    
    return 0;
}


int main(){
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    auto result = findpeek(arr);
    cout<<result;

}