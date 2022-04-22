// Copyright 2021 NNTU-CS
int countPairs1(int arr, int len, int value) {
  int i = 0;
  int j = 0;
  int k = 0;
  for (int i = 0; i < len; i++) {
  for (int j = i + 1; j < len; j++) {
  if (arr[i] + arr[j] == value) {
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
  int i = 0;
  int j = 0;
  int kol = 0;
  for (int i = 0; i < len; i++) {
  for (int j = i + 1; j < len; j++) {
  if (arr[i] + arr[j] == value) {
  k = k + 1;
  }
  }
  }
  return k;
}
int countPairs3(int *arr, int len, int value) {
  int k = 0;
  for (int i = 0; i < len; i++) {
  int q = i + 1;
  int d = len - 1;
  while (q < d) {
  int s = (q + d) / 2;
  if (arr[s] + arr[i] < value) {
  q = s + 1;
  } else {
  d = s;
  }
  }
  while (arr[q] + arr[i] == value) {
  k += 1;
  q += 1;
  }
  }
  return k;
}
