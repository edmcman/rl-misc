
# 1 
void sys_getversion(int *major, int *minor, int *bugfix)
{
    if (major)
        *major = 0;
    if (minor)
        *minor = 48;
    if (bugfix)
        *bugfix = 0;
}