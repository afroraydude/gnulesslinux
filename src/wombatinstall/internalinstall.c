#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

int main(int argc, char *argv[])
{
  char yn[64];

  printf("Chrooted into system.\n\nSetting PATH and checking USPM");

  setenv("PATH", "/bin:/usr/bin:/sbin:/usr/sbin", 1);

  printf("Checking for USPM...");

  system("uspm");

  if (access("/var/uspm/storage/packages.json",F_OK) != -1) {
    printf("ok\n");
  } else {
    printf("error.\nEither USPM is missing or your system permissions are wrong.\n");
    return 1;
  }

  printf("Reinstalling system packages based off of packages.json. Would you like to modify the list? (y/N) ");

  scanf("%s", yn);

  if (strcmp(yn, "y") == 0) {
    system("vim /var/uspm/storage/packages.json");
  }

  system("uspm-extended u");

  return 0;
}