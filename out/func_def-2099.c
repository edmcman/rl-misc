#include <signal.h>

#include <stdio.h>

#include <unistd.h>

# 1 
void setup_blocked_signals(struct sigaction *signal_action, int flags) {
 signal_action->sa_handler = SIG_DFL;


 if (flags & 0x1) {
  sigaddset(&signal_action->sa_mask, SIGUSR1);
 }


 if (flags & 0x2) {
  sigaddset(&signal_action->sa_mask, SIGUSR2);
 }


 sigprocmask(SIG_BLOCK, &signal_action->sa_mask, NULL);
}