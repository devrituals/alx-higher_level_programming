#!/usr/bin/python3
# AUTHOR : ABDELBAR AD
def uniq_add(my_list=[]):
    new = set(my_list)
    res = 0
    for i in new:
        res += i
    return res
