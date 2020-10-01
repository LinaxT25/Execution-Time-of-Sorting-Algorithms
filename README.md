# Execution-Time-of-Sorting-Algorithms 
To use this just compile using C Compiler like GCC and execute, below how works in nutshell:

You'll need fornece to terminal the follow values: **inc, max, stp and rpt**. The terminal ask to you insire this values in order respectively, the **inc** represents the initial index of a random array of integers which will be generated, for example if you insert 100, the array will allocate space for 100 int numbers and generate them using a pseudorandom generator based in you current time.

The **max** is the limit index which array will generate numbers, the array limit his interval index using **inc** and **max** values, however for increment the value between the interval of them we'll use the **stp** for work, basically this increment the value of index starting from **inc** until reaches **max**, for example if you insert 1000 for **inc**, 10000 for **max** and 500 for **stp**, the program will generate arrays in intervals like x[1000],x[1500],x[2000] until value of **max**.

For the end we have **rpt**, basically the numbers of repetitions which the program will do the process again, used for best catch of execution time.

**Warning: Be carefull using *rpt* if you set high values, you'll have a risk of crashes and slowness in your PC.**

**Don't open your exe directly or will close, open only in a shell.**

*If you use low values for inc and max, you'll have output like 0.00000, don't worry you don't do nothing wrong, values too low will not be catched by the program because of its simplicity, try high values and use rpt to get best accuracy.*

**Example of output**
**inc**:1000, **max**:10000, **stp**:1000, **rpt**:100

n        Bubble         Insertion        Shell          Merge           Quick           Radix
---------------------------------------------------------------------------------------------------
1000    0.001420        0.000000        0.000040        0.000080        0.001450        0.000160
2000    0.005530        0.000040        0.000080        0.000160        0.005820        0.000340
3000    0.012450        0.000000        0.000120        0.000280        0.012990        0.000600
4000    0.022010        0.000000        0.000200        0.000340        0.023070        0.000790
5000    0.034530        0.000020        0.000340        0.000480        0.036360        0.001000
6000    0.049860        0.000040        0.000270        0.000640        0.052220        0.001160
7000    0.067390        0.000040        0.000320        0.000720        0.070970        0.001360
8000    0.088490        0.000040        0.000360        0.000800        0.092540        0.001570
9000    0.112270        0.000040        0.000480        0.000880        0.117020        0.001660
10000   0.138280        0.000080        0.000500        0.001020        0.142820        0.001950
