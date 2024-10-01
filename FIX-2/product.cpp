//Product of a matrix of odd element whose ith and jth element are same
#include<iostream>
using namespace std;


int calculateMatrixSum(int A[][4], int row, int col){
    int product=1;
    int count=0;
    if(row>0&&col>0){
        for (int i = 0; i < row; i++){      
		    for (int j = 0; j <col ; j++){
                if(i==j && A[i][j]%2!=0){
                    product=product*A[i][j];
                    count++;
                }
                
            }
        }
        
    }
    else{
        return 0;
    }
    //if none of the diangonal elements are odd
    if(count==0){
        return 0;
    }
    return product;
    

}
int main(){
    int rows=4;
    int coulmns=4;
    	int A[4][4] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };
    int sum=calculateMatrixSum(A,rows,coulmns);
    cout<<"The resultant sum is="<<sum<<endl;
    return 0;

}
//if all are one then you can also take one more varaible like count or 
//use this conditon if(product<=1) then return 0 else give result