#!/bin/bash

for file in *.c; do
    if [ -f "$file" ]; then
        base_name="${file%.c}"  # Remove the .c extension to get the base name
        gcc -c "$file" -o "$base_name.o"
    fi
done

