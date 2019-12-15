#!/bin/sh

cat /etc/passwd | grep -v '#' | awk '{if (FNR % 2 ==0) print $1}' | cut -d':' -f1 | rev | sort -r | sed -n "$FT_LINE1 , $FT_LINE2 p" | sed -e 's/$/,/g' | tr '\n' ' '| sed -e's/, $/./' | tr -d '\n'
