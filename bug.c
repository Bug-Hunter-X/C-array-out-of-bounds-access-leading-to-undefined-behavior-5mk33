int main() { 
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr + 5; // Points to memory outside the array
  *ptr = 10; // Potential segmentation fault or unexpected behavior
  return 0;
}