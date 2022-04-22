// Copyright 2021 NNTU-CS
int countPairs1(int arr, int len, int value) {
  int j = 0;
  int i = 0;
  int kol = 0;
  for (int j = 0; j < len; j++) {
  for (int i = j + 1; i < len; i++) {
  if (arr[j] + arr[i] == value) {
  k = k + 1;
  }
  }
  }
  return k;
}
int countPairs2(intarr, int len, int value) {
  while (arr[len - 1] > value) {
  len = len - 1;
  }
  int j = 0;
  int i = 0;
  int k = 0;
  for (int j = 0; j < len; j++) {
  for (int i = j + 1; i < len; i++) {
  if (arr[j] + arr[i] == value) {
  k = k + 1;
  }
  }
  }
  return k;
}
int countPairs3(int *arr, int len, int value) {
  int k = 0;
  for (int j = 0; j < len; j++) {
  int q = j + 1;
  int b = len - 1;
  while (q < b) {
  int s = (q + b) / 2;
  if (arr[s] + arr[j] < value) {
  q = s + 1;
  } else {
  b = s;
  }
  }
  while (arr[q] + arr[j] == value) {
  k += 1;
  q += 1;
  }
  }
  return k;
}
