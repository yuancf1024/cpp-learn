# ThoughtWorks思特沃克2018校园招聘之春招家庭作业 - 无人机

## 思路

## 代码

**文件结构**

```shell
- bin
- Test
    - case1
        in
        in2
    - case2
        in
        in2
main
README.md
```


### 样例1

in
plane1 1 1 1
plane1 1 1 1 1 2 3
plane1 2 3 4 1 1 1
plane1 3 4 5
plane1 1 1 1 1 2 3

in2
2
2
4
100

stdout
plane1 2 3 4 5
Error: 4
cannot find 100

样例2

in
plane1 1 1 1
plane1 1 1 1 1 2 3
plane1 2 3 4 1 1 1
plane2 3 4 5
plane1 1 1 1 1 2 3

in2
3
2
4
100

stdout
plane1 2 3 4 5
plane2 3 3 4 5
Error: 4
cannot find 100
