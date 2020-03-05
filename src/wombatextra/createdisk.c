#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define true 0
#define false 1

int use_iso_hybrid = false;

void gen_random(char *s, const int len) {
    static const char alphanum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
      s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}

char* concat(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator

    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int check() {
  printf("Checking for root...");
  if(geteuid() != 0)
  {
    printf("ok\n");
  } else { return false; }
  printf("This a tutorial on creation of a backup disk for this operating system.\n");
  printf("Checking for sysliux...");
  if (access("/var/uspm/storage/syslinux", R_OK) != -1) {
    printf("ok\n");
  } else { return false; }
  printf("Checking for default ISOLINUX config...");
  if (access("/var/uspm/storage/syslinux/isolinux/isolinux.cfg", F_OK) != -1) {
    printf("ok\n");
  } else { return false; }
  printf("Checking for ISOLINUX utility...");
  if (access("/var/uspm/storage/syslinux/isolinux/isolinux.bin", F_OK) != -1) {
    printf("ok\n");
  } else { return false; }
  printf("Checking for mkisofs...");
  if (access("/var/uspm/storage/disktools", R_OK) != -1) {
    printf("ok\n");
  } else { return false; }
  printf("Checking for isohybrid...");
  if (access("/var/uspm/storage/isotools", R_OK) != -1) {
    printf("ok\n");
    use_iso_hybrid = true;
  } else { printf("no.\nWARNING: software won't be able to be run on USB drives. Please fix this by installing isotools.\n"); }
  return true;
}

int main() {
  chdir("/");
  if (check() == true) {
    char tempdir[64];
    gen_random(tempdir, 64);
    printf("Copying root dir to disk...");
    mkdir(tempdir); 
    system(concat("cp -a /* /", tempdir));
    printf("Creating ISO disk");
    system(concat("mkisofs -o output.iso -b isolinux/isolinux.bin -c isolinux/boot.cat -no-emul-boot -boot-load-size 4 -boot-info-table -f -U -D /",tempdir));
    // TODO: PLACE DRIVE PICKER
    printf("Migrating disk to drive...");
  } else {
    printf("\n\nSomething is missing, please make sure you have everything.");
    return 1;
  }
}