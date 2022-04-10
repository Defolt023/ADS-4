// Copyright 2021 NNTU-CS 
int countPairs1(int *arr, int len, int value) {
  k = 0;
  for (int i = 0; i < len; i++) {
  for (int j = 0; i < len; j++) {
  if arr [i] + arr[j] == value) {
  k++;
  }
  }
  }
  if (k > 0) {
  return k;
  } else {
  return 0;
}
int countPairs2(int *arr, int len, int value) {
  while (arr[len - 1] > value) {
  len--;
  k = 0;
  for (int i = 0; i < len; i++) {
  for (int j = 0; i < len; j++) {
  if arr [i] + arr[j] == value) {
  k++;
  }
  }
  }
  if (k > 0) {
  return k;
  } else {
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int k = 0;
  int pos = 0;
  while ((value - arr[0] >= arr[pos]) && (pos < len))
  pos =+ 1;
  for (int i = 0; i < pos -1; i++) {
  int rem = value - arr[i];
  int left = i + 1;
  int right = pos - 1;
  while (left <= right) {
  int center = (left + right) / 2;
  if (arr[center] == rem) {
  for (int j = left; j <= right; j++)
  if (arr[j] == rem)
  k++;
  break;
  }
  if (arr[center] > rem)
  right = center - 1;
  else
  left = center + 1
  }
  }
  return k;
}
