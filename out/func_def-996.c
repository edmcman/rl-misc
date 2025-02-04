#include <time.h>

# 1 
int
meat_time_which_day_of_week(
    unsigned char const * const
        p_arg,
    size_t const
        i_arg_len)
{
    static unsigned char const a_ref_wday[7u][3u] =
    {
        { 's', 'u', 'n' },
        { 'm', 'o', 'n' },
        { 't', 'u', 'e' },
        { 'w', 'e', 'd' },
        { 't', 'h', 'u' },
        { 'f', 'r', 'i' },
        { 's', 'a', 't' }
    };

    int
        i_wday;

    char
        b_found;

    i_wday =
        0;

    b_found =
        0;

    if (
        3u
        == i_arg_len)
    {
        while (
            !b_found
            && (
                i_wday
                < 7))
        {
            if (
                (
                    p_arg[0u] == a_ref_wday[i_wday][0u])
                && (
                    p_arg[1u] == a_ref_wday[i_wday][1u])
                && (
                    p_arg[2u] == a_ref_wday[i_wday][2u]))
            {
                b_found =
                    1;
            }
            else
            {
                i_wday ++;
            }
        }
    }

    if (
        !b_found)
    {
        i_wday =
            -1;
    }

    return
        i_wday;

}