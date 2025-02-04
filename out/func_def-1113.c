#include <assert.h>

#include <errno.h>

#include <stdbool.h>

#include <stddef.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

# 1 
static bool
kcn_netstat_match(const char *s, size_t *scorep)
{
 size_t score;

 score = 0;





 do { if (strcasestr(s, ("server")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("network")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("terminal")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("host")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("router")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("switch")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("equipment")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("HDD")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("storage")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("CPU")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("load")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("traffic")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("latency")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("hop")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("ttl")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("as")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("assoc")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("less")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("greater")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("equal")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("than")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("ge")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("gt")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("eq")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("le")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("lt")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("max")) != NULL) ++score; } while (0 );
 do { if (strcasestr(s, ("min")) != NULL) ++score; } while (0 );

 *scorep = score;
 errno = 0;
 if (score == 0)
  return false;
 else
  return true;
}