#!/usr/bin/env python

# Cracking the coding interview (150) Q1.1
# Implement an algorithm to determine if a string has all unique characters
# What if you can not use additional data structures?

def isUnique(s):
    if all([s.count(x)==1 for x in s]):
        return 'Yes'
    else:
        return 'No'
<<<<<<< HEAD

# Cracking the coding interview (150) Q1.2
# Write code to reverse a C-Style String. (C-String means that 'abcd' is
# represented as five characters, including the null character.)
# : the additional requirement is not so relevant to a Python solution.

def strReverse(s):
    return s[-1::]

# Cracking the coding interview (150) Q1.3
# Design an algorithm and write code to remove the duplicate characters in
# a string without using any additional buffer. NOTE: One or two additional
# variables are fine. An extra copy of the array is not.
# FOLLOW UP
# Write the test cases for this method.

def 
=======
>>>>>>> origin/master
