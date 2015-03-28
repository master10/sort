#include<iostream>

using namespace std;

int bub(int * arr,int n)
{
        bool flag=true;
        int temp;
        while(flag==true)
        {
                flag=false;
                for(int i=1;i<n;i++)
                {
                        if(arr[i-1]>arr[i])
                        {
                                temp=arr[i-1];
                                arr[i-1]=arr[i];
                                arr[i]=temp;
                                flag=true;
                              
                        }
                }       
        }
        /*for(int i=0;i<n;i++)
        { 
                cout<<arr[i]<<endl;
        }*/
        return 0;       
}

int main()
{
        int arr[50],n,i;
        cout<<"enter the size of the array"<<endl;
        cin>>n;
        cout<<"enter the  elements of the array"<<endl;
        for(i=0;i<n;++i)
        {
                cin>>arr[i];
        } 
        bub(arr,n);
        for(i=0;i<n;++i)
        {
                cout<<arr[i];
        }         
              

} 
