# Linux

## file
```
pwd 打印当前路径
ln -s [target] [linkname] 创建softlink
```

## config
- environment variable
```
location: 
    /etc/environment
    /etc/profile
    ~/.profile
    ~/.bashrc
print:
    echo $PATH
    env
add:
    export $path = "ffff"   # 临时添加
    放到.bashrc，执行source .bashrc，变成永久
delete：
    unset path
```

## c program
### 预处理器
- define： `#` 可以将参数字符串化 `##`可以来链接参数
```
#define test(a) func(#a)
    test(var) -> test("var")
#define test(a) func(var##a)
    test(1) -> func(var1)
```