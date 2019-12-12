#include <stdio.h>
#include <pwd.h>

int main(void) {
  struct passwd *pwd;
  pwd = getpwnam("daemon");
  printf("Username: %s, UID: %d", pwd.pw_name, pwd.pw_uid);
  return 0;
}