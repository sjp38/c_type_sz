#!/bin/bash

SRC=c_type_sz.c

echo "On 32bit system"
echo "==============="
echo ""
gcc -m32 $SRC
./a.out

echo ""
echo ""

echo "On 64bit system"
echo "==============="
echo ""
gcc -m64 $SRC
./a.out
rm ./a.out
