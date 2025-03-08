#!/bin/bash
read a; printf %.3f $(echo $a | bc -l)
