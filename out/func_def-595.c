
# 1 
void write_tag(char* buffer, char tag)



{
  int offset = 0;
  while (offset < 10)
# 54 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/willempx/verifast/refs/heads/master/examples/crypto_ccs/symbolic_model/src/item_tags.c"
  {



    *(buffer + offset) = tag;
    offset = offset + 1;



  }
}