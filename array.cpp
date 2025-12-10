#include <iostream>
using namespace std;

/*1) WAF to calculate sum & product of all numbers in an array
int main(){ 
int array[]={1,2,3,4,5,6,7,8,9}
int size= sizeof(array)/sizeof(int);
int sum=0 ,product=1 ;
for(int i=0;i<size;i++){
sum +=array[i];
product *=array[i];
}
cout<<"Sum is "<<sum<< "product is "<<product; 
}
*/

/*2) WAF to swap the max & min number of an array

int swapMaxMin(int arr[],int n){
    int min_index=0;int max_index=0;
  for(int i=0;i<n;i++){
    if(arr[i]<arr[min_index]){
        min_index=i;
    }

    if(arr[i]>arr[max_index]){
      max_index=i;
    }

  }

int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;

    cout << "Array after swapping max & min: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

}

int main(){
int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
   cout << "befor  swapping max & min: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    swapMaxMin(arr, n);
}
    
    */

/*3) WAF to print all unique values in an array*/

/*WAF to print intersection of 2 arrays*/
void intersection(int a[], int n, int b[], int m) {

    cout << "Intersection: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, n1, arr2, n2);
}