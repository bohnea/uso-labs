#!/bin/bash
​
FILE='file.txt'
cat /dev/null > "$FILE"
for i in `seq 100`; do
    echo "$i" | sha1sum | cut -f1 -d' ' >> "$FILE"
done
