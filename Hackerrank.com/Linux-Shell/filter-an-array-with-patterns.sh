#!/bin/bash
while IFS= read -r line; do
    if ! [[ $line =~ [Aa] ]]; then
        echo $line
    fi
done
