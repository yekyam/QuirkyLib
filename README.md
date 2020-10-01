# QuirkyLib
For the tools we keep in the trunk instead of the glovebox.

------------------
QLib
Just include this file into your main project to access all other files. 

------------------
QBenchmark

Two ways to use: 

  A) QBenchmark myBenchmark; //This makes starts a timer
     //some code here
     myBenchmark.QBen_end();
     myBenchmark.QBen_print_E_Time(); //Prints time in seconds
  
  B) QBenchmark anyName(# of times to run function, function name, any arguments); //Spits out an average time in seconds of run time of the function. 

------------------
QMacros

A growing collection of useful macros. 

QMAC_STRINGIFY(X) //Wraps X in quotation marks. 
QMAC_LINE //Prints out line number to console 

------------------
QMemTracker

To turn off or on, change "#if 1" to "#if 0". Tracks new and delete by number of allocations, and bytes.

QMem_Stats(); // Prints total number of allocations and total number of still allocated bytes. 


