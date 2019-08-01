#!/bin/sh
# remove all *.o file

find ./ -name *.o | xargs rm -f
