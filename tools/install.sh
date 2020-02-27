!/bin/sh

cp -ar /* "$osdir"

chroot "$osdir" /usr/bin/env -i          \
    HOME=/root TERM="$TERM"            \
    PS1='(Mlfs chroot) \u:\w\$ '        \
    PATH=/bin:/usr/bin:/sbin:/usr/sbin \
    /bin/bash --login
