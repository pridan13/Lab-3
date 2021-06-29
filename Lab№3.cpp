#include <iostream>
using namespace std;


int main() {
  
cout << "Задание № 1. Исключение из массива всех отрицательных чисел" << endl;
int size1, size2;
int j = 0;
cout << "Введите кол-во элементов в массиве: " << endl;
cin >> size1;
int *arr1;
arr1 = new int [size1];
int *arr2 ;
size2 = 0;
for(int i = 0; i < size1; i++)
{
   cout << "Введите элемент массива № " << i + 1 << " : ";
   cin >> arr1[i];
   if (arr1[i] < 0)
   {
     size2++;
     
   }
}
size2 = size1 - size2;
arr2 = new int [size2];
cout << "Массив без отрицательных элементов: ";
    for (int i = 0; i < size1; i++) 
      {
         if (arr1[i] > 0)
           {
             arr2[j] = arr1[i];
              j++;
           }
      }
     for (int i = 0; i < size2; i++)
       { 
           cout<<arr2[i]<<" ";
       }
    delete[] arr1;
    delete [] arr2;
    cout << endl;
    
//------------------------------------------------------
cout << "ЗАДАНИЕ №2. Нахождение всех гласных в строке" << endl;
string s;
cout << "Введите строку: ";
cin >> s;
for (int i = 0; i < s.length(); i++)
  {
    if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'|| s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' || s[i]=='U'||s[i]=='Y')
    {
      cout << s[i] << endl;
    }
  }

}