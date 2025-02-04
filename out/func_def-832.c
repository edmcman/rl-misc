
# 1 
static char *CG_FetchHitPartName(int *hitLocation) {
 if (*hitLocation & 0x00000001) {
  *hitLocation &= ~0x00000001;
  return "^1head";
 } else if (*hitLocation & 0x00000002) {
  *hitLocation &= ~0x00000002;
  return "^4chest";
 } else if (*hitLocation & 0x00000004) {
  *hitLocation &= ~0x00000004;
  return "^4back";
 } else if (*hitLocation & 0x00000008) {
  *hitLocation &= ~0x00000008;
  return "^4left arm";
 } else if (*hitLocation & 0x00000010) {
  *hitLocation &= ~0x00000010;
  return "^4right arm";
 } else if (*hitLocation & 0x00000020) {
  *hitLocation &= ~0x00000020;
  return "^2leg";
 } else {
  *hitLocation = 0;
  return "error!";
 }
}