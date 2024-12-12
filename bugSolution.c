int main() { 
  int arr[5] = {1, 2, 3, 4, 5};
  if (5 >= 0 && 5 < 5) { 
    int *ptr = arr + 4; // Points to the last valid element
      *ptr = 10; // Modifies the last element
  }
  return 0;
}