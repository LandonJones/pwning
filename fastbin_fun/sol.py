#!/usr/bin/env python2.7
from pwn import * 

def malloc(size, index, data): 
    pass

def target(): 
    pass 

def free(index): 
    pass 

def exit(): 
    pass 

context.log_level = 'debug'
context.terminal = ['tmux', 'new-window'] 
r = process('./fastbin') 
   
libc = ELF('./libc-2.23.so') #include libc for function offsets
   
if (args.GDB): 
   gdb.attach(r) # attach GDB to the running process 
   
puts = r.recvline() 

libc_puts = int(puts.replace("puts: ", ""), 16) # get the leak 

