// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int left = 0, right = size, count = 0;
int mid = left + (right - left)/2;
while(right > left)
{
if(arr[mid] < value)
   left = mid + 1;
else
   right = mid;
}
if(arr[mid] == value)
{
   while (arr[mid - 1] == value)
     mid --;
  
   while (arr[mid] == value)
   {
      count ++;
      left ++;
   }
}
if(count != 0)
  return count;
else
  return 0; // если ничего не найдено
}
