#!/bin/bash
while true; do 
    ./r > input # 生成随机数据
    ./a < input > output.a 
    ./b < input > output.b
    diff output.a output.b # 文件比较
    if [ $? -ne 0 ] ; then break; fi # 判断返回值
done