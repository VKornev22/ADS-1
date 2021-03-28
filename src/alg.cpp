// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0, right = size, mid, count = 0;
  while (right > left) {
  mid = left + (right - left) / 2;
  if (arr[mid] < value)
    left = mid + 1;
  else
    right = mid;
  }
  if (arr[left] == value) {
  while (arr[left] == value)
    count++;
    left++;
  }
  }
  if (count != 0)
    return count;
  else
  return 0; // если ничего не найдено
}
