# Log of NJU computer system lab
The refered material is from NanJing University [proj link](https://ysyx.oscc.cc/docs/ics-pa/PA1.html)
## PA0
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
- 