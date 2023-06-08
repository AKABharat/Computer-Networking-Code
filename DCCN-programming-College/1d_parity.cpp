#include<iostream>
using namespace std;
int main(){
  int frame_size;
  int count=0;
  int arr[10];
  cout << "enter the frame bits size : ";
  cin >> frame_size;
  cout << "enter the frame bits : " << endl;
  for (int i = 0; i < frame_size-1; i++)
  {
    cout << "[" << i << "] : ";
    cin >> arr[i];
    if(arr[i]==1){
      count++;
    }
  }
  int choice;
  while (choice !=0 && choice !=1)
  {
    cout << "Enter 0 for odd and 1 for even parity : ";
    cin >> choice;
    if (choice !=1 && choice !=0)
    {
      cout << "invalid input" << endl;
    }
  }
    if(count %2 == 0){
      if (choice ==0)
      {
        arr[frame_size-1] = 1;
      }
      else
        arr[frame_size-1] = 0;
    }
    if (count %2 !=0)
    {
      if (choice == 0)
      {
        arr[frame_size-1] = 0;
      }
      else
        arr[frame_size-1] = 1;
    }
    cout << "numbers before parity : " << endl;
    for (int i = 0; i < frame_size-1; i++)
    {
      cout << "[" << i << "] : "<<arr[i]<<endl;
    }
    cout << "numbers after parity : " << endl;
    for (int i = 0; i < frame_size ; i++)
    {
      cout << "[" << i << "] : " << arr[i]<<endl;
    }
}