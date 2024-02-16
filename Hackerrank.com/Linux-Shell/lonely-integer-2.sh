#!/bin/bash
read
echo $(cat | tr ' ' '\n' | sort | uniq -u)
