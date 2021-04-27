#!/bin/bash
echo Enter N number of days
read cmd_in
find /home/cyong2 -iname "*" -atime +$cmd_in -type f|zip compress -@
