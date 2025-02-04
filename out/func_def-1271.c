
# 1 
void needwun(char SEQA[128], char SEQB[128],
             char alignedA[128 +128], char alignedB[128 +128]){


    char ptr[(128 +1)*(128 +1)];

    int M_former[128 +1];
    int M_latter[128 +1];

    int score, up_left, up, left, max;
    int row, row_up, r;
    int a_idx, b_idx;
    int a_str_idx, b_str_idx;
# 40 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/peterpengwei/HDLRevisit/refs/heads/master/AlphaData_Optimization/nw/nw_duplication/nw.c"
    for (a_idx=0; a_idx<128 +1; a_idx++) {
        M_former[a_idx] = a_idx*-1;
 ptr[a_idx] = '<';
    }


    fill_out: for(b_idx=1; b_idx<(128 +1); b_idx++){
 M_latter[0] = M_former[0] + -1;
 ptr[b_idx*(128 +1)] = '^';
        fill_in: for(a_idx=1; a_idx<(128 +1); a_idx++){
            if(SEQA[a_idx-1] == SEQB[b_idx-1]){
                score = 1;
            } else {
                score = -1;
            }

            row = (b_idx)*(128 +1);

            up_left = M_former[a_idx-1] + score;
            up = M_former[a_idx ] + -1;
            left = M_latter[a_idx-1] + -1;

            max = ( ((up_left)>(( ((up)>(left))?(up):(left) )))?(up_left):(( ((up)>(left))?(up):(left) )) );

            M_latter[a_idx] = max;
            if(max == left){
                ptr[row + a_idx] = '<';
            } else if(max == up){
                ptr[row + a_idx] = '^';
            } else{
                ptr[row + a_idx] = '\\';
            }
        }
 for (int k=0; k<128 +1; k++) {
     M_former[k] = M_latter[k];
 }
    }


    a_idx = 128;
    b_idx = 128;
    a_str_idx = 0;
    b_str_idx = 0;

    trace: while(a_idx>0 || b_idx>0) {
        r = b_idx*(128 +1);
        if (ptr[r + a_idx] == '\\'){
            alignedA[a_str_idx++] = SEQA[a_idx-1];
            alignedB[b_str_idx++] = SEQB[b_idx-1];
            a_idx--;
            b_idx--;
        }
        else if (ptr[r + a_idx] == '<'){
            alignedA[a_str_idx++] = SEQA[a_idx-1];
            alignedB[b_str_idx++] = '-';
            a_idx--;
        }
        else{
            alignedA[a_str_idx++] = '-';
            alignedB[b_str_idx++] = SEQB[b_idx-1];
            b_idx--;
        }
    }


    pad_a: for( ; a_str_idx<128 +128; a_str_idx++ ) {
      alignedA[a_str_idx] = '_';
    }
    pad_b: for( ; b_str_idx<128 +128; b_str_idx++ ) {
      alignedB[b_str_idx] = '_';
    }
}