#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size: \n";
    cin>>n;
    int arr[n], arr2[n];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Size of array: "<<size<<"\n";
    cout<<endl<<"Enter array elements \n";
    for (int i = 0;i < n; i++) {
        cin>>arr[i];
    }
    cout<<"element : \n";
    for(int i = 0;i <n; i++) {
        cout<<endl<<arr[i];
        cout<<"\n";
    }
    for(int i = 0; i<n;i++) {
        arr2[i] = arr[i];
    }
    cout<<"\n copied array elements";
    for (int i = 0; i < n; i++) {
        cout<<endl<<arr2[i];
        cout<<"\n";
    }
    int index;
    cin>>index;
    cout<<"\n Index : "<<arr[index]<<" "<<endl;
    return 0;
}
