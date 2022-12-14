
## golang
### golang基础
- golang中的new和make区别？
- golang中的defer？调用时机？调用顺序？预计算值？
- golang中的main函数和init函数？
- golang中的匿名函数？闭包？闭包延时绑定问题？用闭包写fibonacci数列？
- golang中的错误处理方式？error，nil，panic，recover？
- golang select 的用途？

### golang类型系统和反射（type system)
- 如何优雅的关闭channel？https://www.jianshu.com/p/d24dfbb33781, channel关闭后读操作会发生什么？写操作会发生什么？
- golang 中reflect的理解？reflect.DeepEqual()?如何结构体反射取出所有的成员？
- golang 接口和接口对象断言
- golang map的实现，图解，扩容，哈希冲突？非协程安全？map加sync.Mutex的方案？sync.map减少锁带来的影响，sync.map 实现原理，拓扑关系图？
- sync.Mutex 和 sync.RWMutex 互斥锁和读写锁的使用场景？
- golang struct 可以比较吗？引用类型不可比较？reflect.DeepEqual的比较？
- golang 中的空结构体？
- golang 总的set？
- golang 中的指针和unsafe包？golang指针退化，不支持类型转换和运算，需要使用借助unsafe
- 用channel实现定时器？（实际上是两个协程同步）
- golang channel的内部实现？
- 实现一个hashmap，解决hash冲突的方法，解决hash倾斜的方法
- c++的模板跟go的interface的区别
- 怎么理解go的interface
- unsafe包学习，与指针
- golang bytes

### golang并发编程 (concurrent programming)
- golang中的G-P-M调度模型？
- 协程的状态流转？Grunnable、Grunning、Gwaiting
- golang怎么做Goroutine之间的同步？channel、sync.mutex、sync.WaitGroup、context，锁怎么实现，用了什么cpu指令?
- [goroutine交替执行,使其能顺序输出1-20的自然数code](https://github.com/wxquare/programming/blob/master/golang/learn_golang/goroutine_example1.go)
- [生产者消费者模式code](https://github.com/wxquare/programming/blob/master/golang/learn_golang/producer_consumer.go)
- sync.Mutex 和 sync.RWMutex 互斥锁和读写锁的使用场景？
- golang context 包的用途？
- [golang 协程优雅的退出？](https://segmentfault.com/a/1190000017251049)
- golang 为什么高并发好？讲了go的调度模型

### golang 内存和垃圾回收（memory and gc）
- golang中的三级内存管理？对比C++中的内存管理？
- 堆、栈和逃逸分析？
- 三色标记垃圾回收？
- golang 什么情况下会发生内存泄漏？Goroutinue泄露？
- golang sync.pool 临时对象池

### golang 内部实现
- [golang中的runtime包教程](golang中的runtime包教程)


### 包和库（package)
- golang sql 链接池的实现
- golang http 连接池的实现
- golang 与 kafka
- golang 与 mysql
- [译]Go文件操作大全](https://colobu.com/2016/10/12/go-file-operations/)

### 其它相关
- golang 单元测试，mock
- golang 性能分析？
- golang 的编译过程？
- golang runtime 了解多少？


## 网络
1. 浅谈对http协议的认识，使用场景，http协议的请求和回包的结构？
2. http协议的状态码含义？200,404,403，502
3. http 1.1中的keep-alive字段的含义，长连接和短连接
4. TCP 链接的建立和状态流转
5. golang 与 http 简单客户端和服务端的实现
6. golang http 连接复用是怎么回事？resp.Body.Close()，TIME_WAIT，https://studygolang.com/articles/28263
7. netstat 查看链接的状态
8. tcp和udp
9. http和tcp的关系
10. udp的头部
11. http的状态码
12. 输入url后涉及什么
13. tcp怎么找到哪个套接字

## 操作系统
1. 大文件排序？内存不够的情况下，使用归并排序
2. 孤儿进程和僵尸进程？
3. 死锁的条件
4. 操作系统内存管理？进程通讯，为什么共享存储区效率最高
5. ipc方式，共享存储区原理
6. 进程虚拟空间布局
7. 进程状态转换
8. 线程的栈在哪里分配


## 逻辑问题
- 100亿个数选top5，小根堆
- 唯一订单号问题，并发量高的话怎么解决
- 跳跃表，为什么使用跳跃表而不使用红黑树
- hash表设计要注意什么问题
- LRU的实现




[在腾讯的八年，我的职业思考](https://baijiahao.baidu.com/s?id=1607037562668810273&wfr=spider&for=pc)



参考：
- https://go101.org/article/101.html
- https://colobu.com/
- http://legendtkl.com/about/


