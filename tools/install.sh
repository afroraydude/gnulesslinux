#!/bin/sh
PATH=/bin:/usr/bin:/sbin:/usr/sbin
rm -rf /root/tools

cp -ar /* "$osdir"

chroot "$osdir" /usr/bin/env -i          \
    HOME=/root TERM="$TERM"            \
    PS1='(wombatos install) \u:\w\$ '        \
    PATH=/bin:/usr/bin:/sbin:/usr/sbin \
    /usr/bin/wombatinstall
