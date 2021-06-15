#include<iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    int arr[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin>>arr[i][j];
            
        }
        cout<<endl;
               
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<arr[i][j]<<"\t";
            
        }
        cout<<endl;
               
    }
    cout<<endl;
    cout<<endl;
    for (int i = 0; i < x; i++)
    {
        if(i%2==0){
            for(int j=0;j<y;j++)
            {
                cout<<arr[j][i]<<"\t";
            }

        }
        else{
        for (int j = y-1; j >= 0; j--)
        {
            cout<<arr[j][i]<<"\t";
        }
        
        }
    }
    
    return 0;
}
