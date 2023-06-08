#include <iostream>
using namespace std;
int main()
{
  int frame_size;
  int arr[20];
  cout << "enter the size of frame : ";
  cin >> frame_size;
  cout << "the size entered is : "<<frame_size<<endl;

  for (int  i = 0; i < frame_size-1; i++)
  {
    cout << "[" << i << "] : ";
    cin >> arr[i];
  }
  cout << "the size of bits : "<<frame_size-1<<endl;
  int num;
  while (num!=0 && num!=1)
  {
    cout << "enter the number either 0 or 1 : ";
    cin >> num;
    if (num!=0 && num!=1)
    {
      cout << "invalid input " << endl;
    }
    
  }
  int position;
  cout << "enter the position you want to enter : ";
  cin >> position;
  cout << "now the size of bits is " << frame_size << endl;
  int i;
  for (i = frame_size; i >position; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[position - 1] = num;
  cout<<"now data is : "<<endl;
  for (int i = 0; i < frame_size; i++)
  {
    cout << "[" << i << "] : " << arr[i] << endl;
  }
  
}