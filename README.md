# Question1_twoProcesses

Write two different programs for Producer Process Pp and worker process Pw.

Pp will take an integer value as an argument.

./Pp num

where num indicates the total number of Child processes it will create. Generate an error message if number of variables passed is not equal to one and terminate the process. Pp will take x and y as input. It will then create a child processes and replace their images with Pw program and pass x and y to the replaced program as parameters. Pw now get two variables values x and y.

Each Pw Calculate the following expression and print the result on console:

output = ∑ X (n=1 to y)

After displaying the value of output terminate the current Pw process.
