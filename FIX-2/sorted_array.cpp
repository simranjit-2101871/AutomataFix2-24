//sorted array fucntion modify the input list elment by sorting them in descending order find what is the mistake beacuse answere isnot correct



//my logic
#include<iostream>
using namespace std;

void descend(int a[],int size){
    int max=0;
    int location=0;
    int temp;
    for(int i=0;i<size-1;i++){
        max=a[i];
        for(int j=i+1;j<size;j++){
            if(max < a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                max=a[i];
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}


 int main(){
    int arr[5]={3,6,3,7,4};
    int n=5;
    descend(arr,n);

    return 0;
 }





//logic number 2
#include<iostream>
using namespace std;

void descend(int a[], int size) {
    int maxIndex;
    int temp;

    for (int i = 0; i < size - 1; i++) {
        maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] > a[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap the found maximum element with the element at index i
        if (maxIndex != i) {
            temp = a[i];
            a[i] = a[maxIndex];
            a[maxIndex] = temp;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test with the original array
    int arr1[5] = {3, 6, 5, 7, 4};
    int n1 = 5;
    cout << "Original array: ";
    descend(arr1, n1);

    // Test with an array that includes duplicates
    int arr2[6] = {5, 3, 5, 2, 5, 3};
    int n2 = 6;
    cout << "Array with duplicates: ";
    descend(arr2, n2);

    // Test with an array with two same elements
    int arr3[2] = {2, 2};
    int n3 = 2;
    cout << "Array with two same elements: ";
    descend(arr3, n3);

    // Test with an array with all same elements
    int arr4[4] = {1, 1, 1, 1};
    int n4 = 4;
    cout << "Array with all same elements: ";
    descend(arr4, n4);

    // Test with an array with one element
    int arr5[1] = {10};
    int n5 = 1;
    cout << "Array with one element: ";
    descend(arr5, n5);



    return 0;
}
