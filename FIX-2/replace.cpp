//The function replace value replaces the list elemnt by 1s if the length is odd and 0s if length is even
#include<iostream>
using namespace std;

void replace(int a[],int size){
    int i,j;
    if(size==0){
    return;
    }
    if(size%2==0){
        i=0;
        while(i<size){
            a[i]=0;
            i++;
        }
    }
    if(size%2!=0){
       i=0;
        while(i<size){
            a[i]=1;
            i++;
        } 
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[4]={1,2,3,4};
    int n=4;
    replace(arr,n);
}




//optimized code
#include<iostream>
using namespace std;

void replace(int a[], int size) {
    if (size == 0) {
        return;
    }

    int value = (size % 2 == 0) ? 0 : 1;

    for (int i = 0; i < size; i++) {
        a[i] = value;
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    int n = 4;
    replace(arr, n);
    printArray(arr, n);

    int arr2[5] = {1, 2, 3, 4, 5};
    int n2 = 5;
    replace(arr2, n2);
    printArray(arr2, n2);

    return 0;
}
