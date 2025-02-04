
# 1 
void iir(float input[64], float output[64],
         float coefficient[4][4][4],
         float internal_state[8][4][2])




{
  int i, imod8, imodNSECTIONS;
  int j;

  float state_2, state_1;
  float coef_a21, coef_a11, coef_b21, coef_b11;
  float sum;

  for (i = 0; i < 64; ++i) {

    imod8 = i % 8;
    imodNSECTIONS = i % 4;

#pragma scop
    sum = input[i];

    for (j = 0; j < 4; ++j) {

      state_2 = internal_state[imod8][j][0];
      state_1 = internal_state[imod8][j][1];

      sum -= internal_state[imod8][j][0] * coefficient[imodNSECTIONS][j][0] +
  internal_state[imod8][j][1] * coefficient[imodNSECTIONS][j][1];

      internal_state[imod8][j][0] = internal_state[imod8][j][1];
      internal_state[imod8][j][1] = sum;

      sum += state_2 * coefficient[imodNSECTIONS][j][2] +
    state_1 * coefficient[imodNSECTIONS][j][3];

    }

    output[i] = sum;
#pragma endscop

  }
}