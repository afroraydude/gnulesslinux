# gnulesslinux
A Linux Distribution with a non-GNU Userland created by [afroraydude](https://github.com/afroraydude)

[![version](https://img.shields.io/badge/version-indev-blue?style=for-the-badge)](https://packages.afroraydude.com/wombatos)

## Why? 
Because in some ways a GNU userland could be seen as bloated or too large, therefore I have decided to create a system that replaces the core GNU packages found in most Linux distributions. 

## Download
The current version is: indev

Downloads will be available on my repo found [here](http://packages.afroraydude.com/wombatos/)

## More details about the system
The system will use [uspm](https://github.com/afroraydude/uspm) as its package manager, with the default mirror as my own mirror found [here](http://packages.afroraydude.com/uspm/). It will be shell-only for now.

## Replacement Checklist
- [ ] autoconf
- [ ] automake
- [ ] bash (planned: [heirloom's bourne shell](http://heirloom.sourceforge.net/sh.html))
- [ ] binutils
- [ ] bison
- [ ] coreutils (planned: [heirloom](http://heirloom.sourceforge.net))
- [ ] dejagnu
- [ ] diffutils
- [ ] findutils
- [ ] gawk
- [ ] gcc (planned: [clang](https://clang.llvm.org))
- [ ] gdbm
- [ ] gettext
- [ ] glibc (planned: [musl-libc](http://www.musl-libc.org))
- [ ] gmp
- [ ] gperf
- [ ] grep (ripgrep?)
- [ ] groff (maybe just don't include?)
- [ ] grub (planned: (e)lilo)
- [ ] gzip (maybe just don't include?)
- [ ] inetutils (iputils?)
- [ ] libtool (slibtool?)
- [ ] m4 ([netbsd m4?](https://github.com/idunham/m4))
- [ ] make (bsd make)
- [ ] ncurses (curses)
- [ ] sed (just use ed?)
- [ ] tar (bsdtar/libarchive?)
- [ ] texinfo
