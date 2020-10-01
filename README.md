# Execution-Time-of-Sorting-Algorithms 
To use this just compile using C Compiler like GCC and execute, below how works in nutshell:

You'll need fornece to terminal the follow values: **inc, max, stp and rpt**. The terminal ask to you insire this values in order respectively, the **inc** represents the initial index of a random array of integers which will be generated, for example if you insert 100, the array will allocate space for 100 int numbers and generate them using a pseudorandom generator based in you current time.

The **max** is the limit index which array will generate numbers, the array limit his interval index using **inc** and **max** values, however for increment the value between the interval of them we'll use the **stp** for work, basically this increment the value of index starting from **inc** until reaches **max**, for example if you insert 1000 for **inc**, 10000 for **max** and 500 for **stp**, the program will generate arrays in intervals like x[1000],x[1500],x[2000] until value of **max**.

For the end we have **rpt**, basically the numbers of repetitions which the program will do the process again, used for best catch of execution time.

**Warning: Be carefull using *rpt* if you set high values, you'll have a risk of crashes and slowness in your PC.**

**Don't open your exe directly or will close, open only in a shell.**

*If you use low values for inc and max, you'll have output like 0.00000, don't worry you don't do nothing wrong, values too low will not be catched by the program because of its simplicity, try high values and use rpt to get best accuracy.*

