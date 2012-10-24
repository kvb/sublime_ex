sublime_ex
==========

clang_crash_ex

This example project is used to illustrate bug #143 for quarnster/SublimeClang.  The project
as commited currently will not crash; rather the crash is observed when includes from the
root Qt folder are used (ex C:\\Qt\\4.7.1\\include\\QtCore).

Also, in support of bug #144, if line #44 is used in this project one can observe a noticeable
performance impact for autocompletions.