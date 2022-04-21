// Copyright 2021 NNTU-CS 
int countPairs1(int *arr, int len, int value) {
  int k = 0;
  for (int i = 0; i < len; i++) {
  for (int j = 0; i < len; j++) {
  if (arr [i] + arr[j] == value) {
  k++;
  }
  }
  }
  if (k > 0) {
  return k;
  } else {
  return 0;
  }
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
}
int countPairs3(int *arr, int len, int value) {
  int k = 0;
  for (int j = 0; j < len; j++) {
  int a = j + 1;
  int p = len - 1;
  while (a < p) {
  int x = (a + p) / 2;
  if (arr[x] + arr[j] < value) {
  a = x + 1;
  } else {
  p = x;
  }
  }
  while (arr[a] + arr[j] == value) {
  k += 1;
  a += 1;
  }
  }
  return k;
}
