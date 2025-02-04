
# 1 
static void function_which_gives_up(int *x) {
  for (int i = 0; i < 5; ++i)
    (*x)++;
}