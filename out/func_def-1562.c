
# 1 
static void bubble_sort(int* array) {
  for (int j = 0; j < 32 - 1; ++j) {
    for (int i = 0; i < 32 - j - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}