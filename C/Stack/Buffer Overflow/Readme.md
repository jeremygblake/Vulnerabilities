Topic: Buffer Overflow


Description:  
    Program that gives an example of a buffer overflow attack.  This attack is showing how one could write to a variable that was declared before data input method "gets".  In this example we have a size 8 buffer.  Meaning that if we offer 9 characters as input the 9th will then be sent into the variable "x".