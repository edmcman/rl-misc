
# 1 
void local_scan(int bucket[512*4])
{
    int radixID, i, bucket_indx;
    local_1 : for (radixID=0; radixID<512*4/16; radixID++) {
        local_2 : for (i=1; i<16; i++){
            bucket_indx = radixID*16 + i;
            bucket[bucket_indx] += bucket[bucket_indx-1];
        }
    }
}