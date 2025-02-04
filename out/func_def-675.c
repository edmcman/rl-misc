
# 1 
unsigned char *extended_hwaddr(int hwtype, int hwlen, unsigned char *hwaddr,
          int clid_len, unsigned char *clid, int *len_out)
{
  if (hwlen == 0 && clid && clid_len > 3)
    {
      if (clid[0] == hwtype)
 {
   *len_out = clid_len - 1 ;
   return clid + 1;
 }
# 1474 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/ArchiDroid/dnsmasq/refs/heads/master/src/rfc2131.c"
      *len_out = clid_len;
      return clid;
    }

  *len_out = hwlen;
  return hwaddr;
}