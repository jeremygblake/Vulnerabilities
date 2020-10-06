Topic: Buffer Overflow


Description:  
    Program that gives an example of a buffer overflow attack.  This attack is showing how one could write to a variable that was declared before data input method "gets".  In this example we have a size 8 buffer.  Meaning that if we offer 9 characters as input the 9th will then be sent into the variable "x".




Build:
    Note:  has only been tested on linux systems.

    1.  You will need to turn off virtual memory randomization.   This can be done by using the following command or the scripts enable/disable randomized addressing.
            $ 
        
    2. Compile the code using make.
            $ make vuln  # this will compile the vulnerability

            $ make clean # this will remove the files generated from compiling.





Run:
    
    CLI:
        You can test the code by using the command:
            $ cat input | ./source  # this will pipe the contents from the input file as input into the program.   
                                    # Note that the input file should contain 9 'A's.
    

    Network Interface:
        Using socat we can pipe the CLI data out to a port.  This is great if you are trying to create an easy accessable tcp connection or if you want to test the vulnerability on a safe vm or system.

        Using netcat aka nc will help to connect to the port on a local computer when using the network interface.  This will just create a consistent tcp connection for the duration the program is running.


        1. $ sudo socat TCP-LISTEN:1337,nodelay,reuseaddr,fork EXEC:"stdbuf -i0 -o0 -e0 ./source"  # on system with vuln software

        2. $nc <vuln system ip> 1337

        3. typing 9 'A's will result in the overflow.




Is it working ?

    There is a print statement of "Worked"  if the program successfully suffered a bufferoverflow attack.


    