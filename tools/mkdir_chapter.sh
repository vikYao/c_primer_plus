#!/bin/sh
#make directory chapter ch_01 ...

for i in $(seq -s ' ' -w 1 17)
do
       #printf "ch_%02u\n" ${i}
       dir_name="ch_"${i}
       echo ${dir_name}
       mkdir ${dir_name}
done
