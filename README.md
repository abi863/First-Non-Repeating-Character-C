# First Non-Repeating Character in C

## Problem

Given a string, find the first character that occurs exactly once.

## Examples

Input: `swiss`
Output: `w`

Input: `aabbcc`
Output: `-1`

## Concepts Used

* Strings
* Character frequency
* Arrays
* String traversal

## Approach

First, count the frequency of every character using a frequency array. Then traverse the string from left to right and print the first character whose frequency is one. If no such character exists, print `-1`.

## Complexity

* Time Complexity: O(n)
* Auxiliary Space Complexity: O(1)

## Language

C
