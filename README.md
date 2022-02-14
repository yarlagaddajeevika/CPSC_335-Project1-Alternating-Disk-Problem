# CPSC_335-Project1-Alternating-Disk-Problem

## Group members: Jeevika Yarlagadda, jeevikayarlagadda@csu.fullerton.edu

### Problem Statement

You have a row of 𝟐𝒏 disks of two colors, 𝒏 light and 𝒏 dark. They alternate: light, dark, light, 
dark, and so on. You want to get all the dark disks to the left hand side and all the light disks to 
the right hand end. The only moves you are allowed to make are those that interchange the 
positions of two neighboring disks. Design an algorithm for solving this puzzle and determine the 
number of moves it takes.

Input: a positive integer 𝑛 and a list of 2𝑛 disks of alternating colors light-dark, starting with light
Output: a list of 2𝑛 disks, the first 𝑛 disks are dark, the next 𝑛 disks are light, and an integer 𝑚
representing the number of swaps to move the light ones after the dark ones


### Instructions on how to run the code:

1, Download the main.cpp file
2, Open a command prompt from the path where the file is downloaded
3, Check the compiler version, I am using g++ 11.2.0
4, Type the commands:
   command 1: g++ main.cpp -o output
   command 2: .\output
5, Text with message will be displayed on the screen,
   Enter the number of the single color disks (dark or light): 
   4 (Enter the light or dark disks count in a row)
6, Output will be displayed as follows:

Initial Reperesentation of disks
l d l d l d l d
After moving darker ones to the right
List of disks
d d d d l l l l
Number of Swaps required are 10
