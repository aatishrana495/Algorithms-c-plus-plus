#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements int the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"The Sorted Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
}
