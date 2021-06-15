#include<iostream>
#include<vector>
using namespace std;

int findpeek(vector<int> arr){
    int n= arr.size();
    int peek=0;
    int height;
    for (int i = 0; i <n-1; i++)
    {
        int j=i+1;
        int k=j+1;
        if(arr[i]<arr[j]&&arr[j]>arr[k]){
            peek=arr[j];
           cout<<peek;
           height = findheight(arr,i,j,k); 

        }  
    }
    
    return 0;
}

int findheight(vector<int> arr,int i, int j, int k){
    int sum;
    int up;
    int down;
    for(int i=0;i<n-1)
}

int main(){
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    auto result = findpeek(arr);

}