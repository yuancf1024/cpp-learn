#!/bin/bash
# author: yuancf1024

echo "-- \$* 演示 ---"
for i in "$*"; do
	echo $i
done

echo "-- \$* 演示 ---"
for i in "$@"; do
	echo $i
done
