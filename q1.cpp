#include<iostream>
using namespace std;

int search(int array[], int start, int end , int key){
    int middle = end - (start + (end-start)/2);
    if(array[middle]= key){
        return middle ;
    }
    else if(array[middle]>key){
        search(array,array[middle],end,key);
    }
    else if(array[middle]<key){
        search(array,start, array[middle],key);
    }
    else{
        return -1;
    }
}
int main(){
    int number;
    int searchnum;
    int arr[100];
    cout<<"Enter the number of elements in serial order"<<endl;
    cin>>number;
    cout << "Enter elements of array"<<endl;
    for(int i = 0 ; i<number;i++){
        cin>> arr[i];
    }
    cout<<"Enter the element to search"<<endl;
    cin>>searchnum;

    cout << "Element you asked is :" << search(arr, 0, number, searchnum)<<endl;
    return  0;
}