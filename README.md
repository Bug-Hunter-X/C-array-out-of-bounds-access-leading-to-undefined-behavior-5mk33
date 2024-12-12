# C Array Out-of-Bounds Access

This repository demonstrates a common C programming error: accessing an array beyond its defined boundaries.  This can lead to segmentation faults, unpredictable behavior, or security vulnerabilities.

The `bug.c` file contains the buggy code, while `bugSolution.c` offers a corrected version.

## Problem

Accessing memory outside the allocated bounds of an array is undefined behavior. The compiler does not perform bounds checking, so you may not encounter an error immediately. However, this can cause crashes, data corruption, or security exploits.

## Solution

Always ensure that array indices remain within the valid range (0 to size - 1).  Use techniques like bounds checking or using safer data structures to prevent out-of-bounds access.