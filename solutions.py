#!/usr/bin/env python
# Cracking the coding interview (150) Q1.1
# Implement an algorithm to determine if a string has all unique characters
# What if you can not use additional data structures?

def isUnique(s):
    if all([s.count(x)==1 for x in s]):
        return "Yes"
    else:
        return 'No'
