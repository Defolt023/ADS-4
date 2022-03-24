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
  return 0;
}
