# Wombat Linux
an **attempt** at a GNU-less Linux Distro
```
__          __             _           _     _      _                  
\ \        / /            | |         | |   | |    (_)                 
 \ \  /\  / /__  _ __ ___ | |__   __ _| |_  | |     _ _ __  _   ___  __
  \ \/  \/ / _ \| '_ ` _ \| '_ \ / _` | __| | |    | | '_ \| | | \ \/ /
   \  /\  / (_) | | | | | | |_) | (_| | |_  | |____| | | | | |_| |>  < 
    \/  \/ \___/|_| |_| |_|_.__/ \__,_|\__| |______|_|_| |_|\__,_/_/\_\
```

A Linux Distribution with a non-GNU Userland created by [afroraydude](https://github.com/afroraydude)

[Official site](https://afroraydude.com/wombatos)

[![version](https://img.shields.io/badge/version-0.1-blue?style=for-the-badge)](https://packages.afroraydude.com/wombatos)

## Why? 
I wanted to see how far I could go with this

## Download
The current version is: v0.1-alpha

Downloads will be available on my repo found [here](http://packages.afroraydude.com/wombatos/)

## More details about the system
The system will use [uspm](https://github.com/afroraydude/uspm) as its package manager, with the default mirror as my own mirror found [here](http://packages.afroraydude.com/uspm/). It will be shell-only for now.

## Support

[Chat with the dev](https://keybase.io/afroraydude/chat)

## Replacement Checklist
- [ ] autoconf (avise the use of cmake?)
- [ ] automake (advise the use of cmake?)
- [X] bash - Bash is installed and is still default, but Heirloom's shell is also installed. Bash is installed for compatibility reasons. 
- [ ] binutils (installed, planned: lld (LLVM))
- [ ] bison 
- [X] coreutils - Coreutils are installed, *however*, they are not the default tools, and instead the tools available are part of the Heirloom project, which is based of of OpenSolaris
- [ ] dejagnu
- [X] diffutils (see coreutils, same applies)
- [ ] findutils
- [ ] gawk
- [ ] gcc (planned: [clang](https://clang.llvm.org))
- [ ] gdbm
- [ ] gettext
- [X] glibc ([musl-libc](http://www.musl-libc.org))
- [ ] gmp
- [ ] gperf
- [ ] grep (ripgrep?)
- [X] groff (see coreutils, same applies)
- [ ] grub (planned: (e)lilo)
- [ ] gzip (maybe just don't include?)
- [ ] inetutils (iputils)
- [ ] libtool (slibtool)
- [ ] m4 ([netbsd m4](https://github.com/idunham/m4))
- [ ] make (bsd make)
- [ ] ncurses (curses)
- [ ] sed (just use ed?)
- [X] tar (see coreutils, same applies)
- [ ] texinfo
