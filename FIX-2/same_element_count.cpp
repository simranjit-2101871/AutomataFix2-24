//if the elemnts in the array are even and same than return the element.always check to the right of the array element

#include<iostream>
using namespace std;

int elementcount(int a[],int size){
    int i,count=0;
    for(i=0;i<size;i++){
        if(i==size-1){
            return count;

        }
        if(a[i]%2==0 &&a[i]==a[i+1]){
            count++;
        }
    }
    return count;

}
int main(){
    int arr[5]={2,3,4,4,1};
    int n=5;
    int result=elementcount(arr,n);
    cout<<"The final result is="<<result<<endl;
}