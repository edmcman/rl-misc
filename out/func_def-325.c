#include <stdlib.h>

#include <string.h>

#include <GL/glx.h>

#include <GL/glxext.h>

#include <X11/keysym.h>

# 1 
static void fillWA(unsigned long * swam, XSetWindowAttributes * swa) {
        *swam = 0;
        swa->event_mask = KeyPressMask | KeyReleaseMask | ButtonPressMask | ButtonReleaseMask | PointerMotionMask | StructureNotifyMask; *swam |= CWEventMask;
}