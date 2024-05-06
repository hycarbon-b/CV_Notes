# 一生一芯项目记录
Chen Mingxi， Guangdong Technion
## Todo
- c language review([Learn c the hard way](https://www.cntofu.com/book/25/),0-18,32,33,42,44, valgrind, gdb)
- verilog sim(verilator)
- digital desgin practice
- NJU PA1
- Writing assginment and file archiving 

## C review
### prac2_make
- Makefile
`all: ex` , automatically compile the code `ex.c` -> target`ex`
- Program
in `ex.c`, we interact with bash and print the content of `ls -l`
### prac4_valgrind
- install 
compile from source code
> Notice: the link in script isn't available. Use (https://sourceware.org/pub/valgrind/valgrind-3.22.0.tar.bz2)
- use valgrind
use valgrind to run progarm with uninitialized variable
### prac17_mem


    
## NJU PA0
The refered material is from NanJing University [proj link](https://ysyx.oscc.cc/docs/ics-pa/PA1.html)

In PA0, we got familiar with some tool/kit (git/make/...), and create the repo for subsequent projects.

- use WSL2 as the platform
- the workspace is in mnt points of win10 space`~/workspace/link`
- clone the proj from https://github.com/NJU-ProjectN/ics-pa to `/link/NJU/ics-pa`
- initialize the sub-repo of ics-pa(nemu/abstract machine)
- successfully compile the `nemu` and `abstract-machine`

```
ics2023
├── abstract-machine   # 抽象计算机
├── am-kernels         # 基于抽象计算机开发的应用程序
├── fceux-am           # 红白机模拟器
├── init.sh            # 初始化脚本
├── Makefile           # 用于工程打包提交
├── nemu               # NEMU
└── README.md
```
others during PA0:
- learn basics of `make`, [link](https://blog.csdn.net/haoel/article/details/2886) & [link](https://zhuanlan.zhihu.com/p/376493209)
- overview of `gdb`, [link](https://linuxconfig.org/gdb-debugging-tutorial-for-beginners) 

